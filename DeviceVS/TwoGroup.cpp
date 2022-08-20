#include"TwoGroup.h"
#include<bitset>

TwoGroup::TwoGroup(DeviceVS* parent)
	: m_pDev(parent)
{
    //----------------�������1-------------------------------------------------------------
    connect(m_pDev->ui.lineEdit_7, SIGNAL(editingFinished()), SLOT(slotEditReg8()));
    connect(m_pDev->ui.lineEdit_8, SIGNAL(editingFinished()), SLOT(slotEditReg9()));
    connect(m_pDev->ui.lineEdit_9, SIGNAL(editingFinished()), SLOT(slotEditReg10_0()));
    connect(m_pDev->ui.lineEdit_10, SIGNAL(editingFinished()), SLOT(slotEditReg10_1()));
    //======================================================================================
    //----------------�������2-------------------------------------------------------------
    connect(m_pDev->ui.lineEdit_11, SIGNAL(editingFinished()), SLOT(slotEditReg11()));
    connect(m_pDev->ui.lineEdit_12, SIGNAL(editingFinished()), SLOT(slotEditReg12()));
    connect(m_pDev->ui.lineEdit_13, SIGNAL(editingFinished()), SLOT(slotEditReg13_0()));
    connect(m_pDev->ui.lineEdit_14, SIGNAL(editingFinished()), SLOT(slotEditReg13_1()));
    //======================================================================================
    // 
    //----------------�������3-------------------------------------------------------------
    connect(m_pDev->ui.lineEdit_15, SIGNAL(editingFinished()), SLOT(slotEditReg14()));
    connect(m_pDev->ui.lineEdit_16, SIGNAL(editingFinished()), SLOT(slotEditReg15()));
    connect(m_pDev->ui.lineEdit_17, SIGNAL(editingFinished()), SLOT(slotEditReg16_0()));
    connect(m_pDev->ui.lineEdit_18, SIGNAL(editingFinished()), SLOT(slotEditReg16_1()));
    //======================================================================================
    //----------------�������4-------------------------------------------------------------
    connect(m_pDev->ui.lineEdit_19, SIGNAL(editingFinished()), SLOT(slotEditReg17()));
    connect(m_pDev->ui.lineEdit_20, SIGNAL(editingFinished()), SLOT(slotEditReg18()));
    connect(m_pDev->ui.lineEdit_21, SIGNAL(editingFinished()), SLOT(slotEditReg19_0()));
    connect(m_pDev->ui.lineEdit_22, SIGNAL(editingFinished()), SLOT(slotEditReg19_1()));
    //======================================================================================
    
    initReg();

}

void TwoGroup::slotEditReg8()
{
    char rg8 = m_pDev->ui.lineEdit_7->text().toInt();
    if (rg8 > 100)
        m_pDev->m_reg[8] = 100;
    else
        m_pDev->m_reg[8] = rg8;
}

void TwoGroup::slotEditReg9()
{
    char rg9 = m_pDev->ui.lineEdit_8->text().toInt();
    if (rg9 > 10)
        m_pDev->m_reg[9] = 10;
    else
        m_pDev->m_reg[9] = rg9;
}

void TwoGroup::slotEditReg10_0()
{
    std::bitset<2> rg10(m_pDev->m_reg[10]);
    rg10[0] = m_pDev->ui.lineEdit_9->text().toInt();
    m_pDev->m_reg[10] = rg10.to_ulong();

    updateInfo();
}

void TwoGroup::slotEditReg10_1()
{
    std::bitset<2> rg10(m_pDev->m_reg[10]);
    rg10[1] = m_pDev->ui.lineEdit_10->text().toInt();
    m_pDev->m_reg[10] = rg10.to_ulong();

    updateInfo();
}

void TwoGroup::slotEditReg11()
{
    char rg11 = m_pDev->ui.lineEdit_11->text().toInt();
    if (rg11 > 100)
        m_pDev->m_reg[11] = 100;
    else
        m_pDev->m_reg[11] = rg11;
}

void TwoGroup::slotEditReg12()
{
    char rg12 = m_pDev->ui.lineEdit_12->text().toInt();
    if (rg12 > 10)
        m_pDev->m_reg[12] = 10;
    else
        m_pDev->m_reg[12] = rg12;
}

void TwoGroup::slotEditReg13_0()
{
    std::bitset<2> rg13(m_pDev->m_reg[13]);
    rg13[0] = m_pDev->ui.lineEdit_13->text().toInt();
    m_pDev->m_reg[13] = rg13.to_ulong();

    updateInfo();
}

void TwoGroup::slotEditReg13_1()
{
    std::bitset<2> rg13(m_pDev->m_reg[13]);
    rg13[1] = m_pDev->ui.lineEdit_14->text().toInt();
    m_pDev->m_reg[13] = rg13.to_ulong();

    //updateInfo();
}

void TwoGroup::slotEditReg14()
{
    char rg14 = m_pDev->ui.lineEdit_15->text().toInt();
    if (rg14 > 100)
        m_pDev->m_reg[14] = 100;
    else
        m_pDev->m_reg[14] = rg14;

}

void TwoGroup::slotEditReg15()
{
    char rg15 = m_pDev->ui.lineEdit_16->text().toInt();
    if (rg15 > 10)
        m_pDev->m_reg[15] = 10;
    else
        m_pDev->m_reg[15] = rg15;
}

void TwoGroup::slotEditReg16_0()
{
    std::bitset<2> rg16(m_pDev->m_reg[16]);
    rg16[0] = m_pDev->ui.lineEdit_17->text().toInt();
    m_pDev->m_reg[16] = rg16.to_ulong();

    updateInfo();
}

void TwoGroup::slotEditReg16_1()
{
    std::bitset<2> rg16(m_pDev->m_reg[16]);
    rg16[1] = m_pDev->ui.lineEdit_18->text().toInt();
    m_pDev->m_reg[16] = rg16.to_ulong();

    updateInfo();
}

void TwoGroup::slotEditReg17()
{
    char rg17 = m_pDev->ui.lineEdit_19->text().toInt();
    if (rg17 > 100)
        m_pDev->m_reg[17] = 100;
    else
        m_pDev->m_reg[17] = rg17;
}

void TwoGroup::slotEditReg18()
{
    char rg18 = m_pDev->ui.lineEdit_20->text().toInt();
    if (rg18 > 10)
        m_pDev->m_reg[18] = 10;
    else
        m_pDev->m_reg[18] = rg18;
}

void TwoGroup::slotEditReg19_0()
{
    std::bitset<2> rg19(m_pDev->m_reg[19]);
    rg19[0] = m_pDev->ui.lineEdit_21->text().toInt();
    m_pDev->m_reg[19] = rg19.to_ulong();

    updateInfo();
}

void TwoGroup::slotEditReg19_1()
{
    std::bitset<2> rg19(m_pDev->m_reg[19]);
    rg19[1] = m_pDev->ui.lineEdit_22->text().toInt();
    m_pDev->m_reg[19] = rg19.to_ulong();

    updateInfo();
}

void TwoGroup::initReg()
{
        //������������� ������ ��������� ���
//--------------------�������1-----------------------------------------------
    m_pDev->ui.lineEdit_7->setText(QString::number(m_pDev->m_reg[8]));
    m_pDev->ui.lineEdit_7->setInputMask("000");
    m_pDev->ui.lineEdit_8->setText(QString::number(m_pDev->m_reg[9]));
    m_pDev->ui.lineEdit_8->setInputMask("00");
    QString str = QString::fromStdString(std::bitset<2>(m_pDev->m_reg[10]).to_string());
    m_pDev->ui.lineEdit_9->setText(str[1]);
    m_pDev->ui.lineEdit_9->setInputMask("B");
    m_pDev->ui.lineEdit_10->setText(str[0]);
    m_pDev->ui.lineEdit_10->setInputMask("B");
    //=============================================================================
    //---------------------�������2-----------------------------------------------
    m_pDev->ui.lineEdit_11->setText(QString::number(m_pDev->m_reg[11]));
    m_pDev->ui.lineEdit_11->setInputMask("000");
    m_pDev->ui.lineEdit_12->setText(QString::number(m_pDev->m_reg[12]));
    m_pDev->ui.lineEdit_12->setInputMask("00");
    str = QString::fromStdString(std::bitset<2>(m_pDev->m_reg[13]).to_string());
    m_pDev->ui.lineEdit_13->setText(str[1]);
    m_pDev->ui.lineEdit_13->setInputMask("B");
    m_pDev->ui.lineEdit_14->setText(str[0]);
    m_pDev->ui.lineEdit_14->setInputMask("B");

    //=============================================================================
    //---------------------�������3-----------------------------------------------
    m_pDev->ui.lineEdit_15->setText(QString::number(m_pDev->m_reg[14]));
    m_pDev->ui.lineEdit_15->setInputMask("000");
    m_pDev->ui.lineEdit_16->setText(QString::number(m_pDev->m_reg[15]));
    m_pDev->ui.lineEdit_16->setInputMask("00");
    str = QString::fromStdString(std::bitset<2>(m_pDev->m_reg[16]).to_string());
    m_pDev->ui.lineEdit_17->setText(str[1]);
    m_pDev->ui.lineEdit_17->setInputMask("B");
    m_pDev->ui.lineEdit_18->setText(str[0]);
    m_pDev->ui.lineEdit_18->setInputMask("B");

    //=============================================================================
    //---------------------�������4-----------------------------------------------
    m_pDev->ui.lineEdit_19->setText(QString::number(m_pDev->m_reg[17]));
    m_pDev->ui.lineEdit_19->setInputMask("000");
    m_pDev->ui.lineEdit_20->setText(QString::number(m_pDev->m_reg[18]));
    m_pDev->ui.lineEdit_20->setInputMask("00");
    str = QString::fromStdString(std::bitset<2>(m_pDev->m_reg[19]).to_string());
    m_pDev->ui.lineEdit_21->setText(str[1]);
    m_pDev->ui.lineEdit_21->setInputMask("B");
    m_pDev->ui.lineEdit_22->setText(str[0]);
    m_pDev->ui.lineEdit_22->setInputMask("B");
    //=============================================================================
}

void TwoGroup::updateInfo()
{
   //���������� ���������� � ������ ��������� ���
  //------------------�������1--------------------------------------------------
    if (m_pDev->m_reg[10] & 1)
        m_pDev->ui.label_22->setText("���������, ��");
    else
        m_pDev->ui.label_22->setText("���������, ���");

    if (m_pDev->m_reg[10] & 2)
        m_pDev->ui.label_24->setText("�������� �����, ��");
    else
        m_pDev->ui.label_24->setText("�������� �����, ���");
    //=============================================================================	
    //------------------�������2--------------------------------------------------
    if (m_pDev->m_reg[13] & 1)
        m_pDev->ui.label_31->setText("���������, ��");
    else
        m_pDev->ui.label_31->setText("���������, ���");

    if (m_pDev->m_reg[13] & 2)
        m_pDev->ui.label_33->setText("�������� �����, ��");
    else
        m_pDev->ui.label_33->setText("�������� �����, ���");
    //=============================================================================

    //------------------�������3--------------------------------------------------
    if (m_pDev->m_reg[16] & 1)
        m_pDev->ui.label_40->setText("���������, ��");
    else
        m_pDev->ui.label_40->setText("���������, ���");

    if (m_pDev->m_reg[16] & 2)
        m_pDev->ui.label_42->setText("�������� �����, ��");
    else
        m_pDev->ui.label_42->setText("�������� �����, ���");
    //=============================================================================

    //------------------�������4--------------------------------------------------
    if (m_pDev->m_reg[19] & 1)
        m_pDev->ui.label_49->setText("���������, ��");
    else
        m_pDev->ui.label_49->setText("���������, ���");

    if (m_pDev->m_reg[19] & 2)
        m_pDev->ui.label_51->setText("�������� �����, ��");
    else
        m_pDev->ui.label_51->setText("�������� �����, ���");
    //=============================================================================
}