#include <3ds.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
    // Inicializa gráficos
    gfxInitDefault();

    // Inicializa console na tela de cima
    consoleInit(GFX_TOP, NULL);

    printf("PuggyK.O iniciado!\n");
    printf("Pressione START para sair.\n");

    // Loop principal
    while (aptMainLoop())
    {
        // Atualiza inputs
        hidScanInput();

        // Botões pressionados
        u32 kDown = hidKeysDown();

        // Sai com START
        if (kDown & KEY_START)
            break;

        // Limpa frame
        gfxFlushBuffers();
        gfxSwapBuffers();

        // Espera VBlank
        gspWaitForVBlank();
    }

    // Finaliza gráficos
    gfxExit();

    return 0;
}
