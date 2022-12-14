#include "../include/common.h"

void printGreetings()
{
    printf(BOLDYELLOW);
    printf("  _____ ____  _   _ _______ _____   ____  _        _    _ _   _ _____ _______  \n");
    printf(" / ____/ __ \\| \\ | |__   __|  __ \\ / __ \\| |      | |  | | \\ | |_   _|__   __| \n");
    printf("| |   | |  | |  \\| |  | |  | |__) | |  | | |      | |  | |  \\| | | |    | |    \n");
    printf("| |   | |  | | . ` |  | |  |  _  /| |  | | |      | |  | | . ` | | |    | |    \n");
    printf("| |___| |__| | |\\  |  | |  | | \\ \\| |__| | |____  | |__| | |\\  |_| |_   | |    \n");
    printf(" \\_____\\____/|_| \\_|  |_|  |_|  \\_\\_____/|______|  \\____/|_| \\_|_____|  |_|    \n\n");
    printf(NC);                                                                        
                                                                               
    printf("That's the domotic house system! If you need a help jus type the command ");
    printf("\033[0;31m");
    printf("\"help\"\n\n");
    printf("\033[0m");
}

void welcomeToHome()
{
    clearScreen();
    printf(BOLDYELLOW);
    printf("\n\n\n");
    printf("\t██╗    ██╗███████╗██╗      ██████╗ ██████╗ ███╗   ███╗███████╗    ██╗  ██╗ ██████╗ ███╗   ███╗███████╗\n");
    printf("\t██║    ██║██╔════╝██║     ██╔════╝██╔═══██╗████╗ ████║██╔════╝    ██║  ██║██╔═══██╗████╗ ████║██╔════╝\n");
    printf("\t██║ █╗ ██║█████╗  ██║     ██║     ██║   ██║██╔████╔██║█████╗      ███████║██║   ██║██╔████╔██║█████╗  \n");
    printf("\t██║███╗██║██╔══╝  ██║     ██║     ██║   ██║██║╚██╔╝██║██╔══╝      ██╔══██║██║   ██║██║╚██╔╝██║██╔══╝  \n");
    printf("\t╚███╔███╔╝███████╗███████╗╚██████╗╚██████╔╝██║ ╚═╝ ██║███████╗    ██║  ██║╚██████╔╝██║ ╚═╝ ██║███████╗\n");
    printf("\t ╚══╝╚══╝ ╚══════╝╚══════╝ ╚═════╝ ╚═════╝ ╚═╝     ╚═╝╚══════╝    ╚═╝  ╚═╝ ╚═════╝ ╚═╝     ╚═╝╚══════╝\n");
    sleep(1);

    printf("\n");
    printf("\t ██████╗              ██╗   ██╗        ██╗███╗   ██╗    ██╗      ██████╗  █████╗ ██████╗ ██╗███╗   ██╗ ██████╗ \n");
    printf("\t██╔════╝              ██║   ██║        ██║████╗  ██║    ██║     ██╔═══██╗██╔══██╗██╔══██╗██║████╗  ██║██╔════╝ \n");
    printf("\t██║         █████╗    ██║   ██║        ██║██╔██╗ ██║    ██║     ██║   ██║███████║██║  ██║██║██╔██╗ ██║██║  ███╗\n");
    printf("\t██║         ╚════╝    ██║   ██║        ██║██║╚██╗██║    ██║     ██║   ██║██╔══██║██║  ██║██║██║╚██╗██║██║   ██║\n");
    printf("\t╚██████╗              ╚██████╔╝        ██║██║ ╚████║    ███████╗╚██████╔╝██║  ██║██████╔╝██║██║ ╚████║╚██████╔╝\n");
    printf("\t╚═════╝               ╚═════╝         ╚═╝╚═╝  ╚═══╝    ╚══════╝ ╚═════╝ ╚═╝  ╚═╝╚═════╝ ╚═╝╚═╝  ╚═══╝ ╚═════╝  ");
    fflush(stdout);
    
    sleep(1);      
    
    printf("\t██");
    fflush(stdout);

    sleep(1);      

    printf("\t██");
    fflush(stdout);
    sleep(1);      

    printf("\t██\n");
    fflush(stdout);
    sleep(1);
    fflush(stdout);

    clearScreen();
}

void graphicBulbOff()
{
    printf("\t          ____\n");
    printf("\t     ---        ---\n");
    printf("\t  ---              ---\n");
    printf("\t --        _         --\n");
    printf("\t--         |>         --\n");
    printf("\t--         |<         --\n");
    printf("\t --        |>        --\n");
    printf("\t  --       |<       --\n");
    printf("\t   --      |>      --\n");
    printf("\t    --     ||-    --\n");
    printf("\t     --    ||    --\n");
    printf("\t      --   ||   --\n");
    printf("\t      |__________|\n");
    printf("\t      <__________>\n");
    printf("\t      <__________>\n");
    printf("\t           //\n");
}

void graphicBulbOn()
{
    printf(BOLDYELLOW"\t          ____\n");
    printf("\t     ---        ---\n");
    printf("\t  ---              ---\n");
    printf("\t --        _         --\n");
    printf("\t--         |>         --\n");
    printf("\t--         |<         --\n");
    printf("\t --        |>        --\n");
    printf("\t  --       |<       --\n");
    printf("\t   --      |>      --\n");
    printf("\t    --     ||-    --\n");
    printf("\t     --    ||    --\n");
    printf("\t      --   ||   --\n"NC);
    printf("\t      |__________|\n");
    printf("\t      <__________>\n");
    printf("\t      <__________>\n");
    printf("\t           //\n");
}



