#ifndef PROCESS_UPNPD_H
#define PROCESS_UPNPD_H

#include "mod_socket.h"


/**********************************************************************************************
 * ������	:process_upnpd_cmd()
 * ����	:����upnpdģ�鷢��������
 * ����	:cmd:���յ���upnpdģ����������
 * ����ֵ	:0��ʾ�ɹ�����ֵ��ʾʧ��
 **********************************************************************************************/
int process_upnpd_cmd(mod_socket_cmd_type *cmd);
#endif