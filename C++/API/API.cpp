// API.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"


#include "..\net\http\curl\okcoinapi.h"


int _tmain(int argc, _TCHAR* argv[])
{

	
	string cn_apiKey = "";							//�뵽www.okcoin.cn���롣
	string cn_secretKey	= "";						//�뵽www.okcoin.cn���롣
	OKCoinApiCn cnapi(cn_apiKey,cn_secretKey);		//����վ
	string symbolcn = "btc_cny";
	cnapi.GetTicker(symbolcn);
	cnapi.DoUserinfo();
	

	//string com_apiKey		= "";					//�뵽www.okcoin.com���롣
	//string com_secretKey	= "";					//�뵽www.okcoin.com���롣
	//OKCoinApiCom comapi(com_apiKey,com_secretKey);	//����վ
	//string symbolcom = "btc_usd";
	//comapi.GetTicker(symbolcom);
	//comapi.DoUserinfo();

	
	{
	//�ֻ��µ�����
	string type		= "buy";
	string price	= "1";
	string amount	= "0.01";
	comapi.DoTrade(symbolcom,type,price,amount);								//POST /api/v1/trade						�µ�����
	//{"order_id":88861705,"result":true}
	string since = "88861705";
	string order_id	= "88861705";
	comapi.DoCancel_Order(symbolcom,order_id);									//POST /api/v1/order_info					��ȡ�û��Ķ�����Ϣ
	}
	


	//{
	//�ڻ��µ�����
	//string symbolcom		=		"ltc_usd";
	//string contract_type	=		"this_week";
	//string price			=		"1";
	//string amount			=		"1";
	//string type				=		"1";
	//string match_price		=		"0";
	//string lever_rate		=		"10";

	//comapi.DoFuture_Trade(symbolcom,contract_type,price,amount,type,match_price,lever_rate);		//POST /api/v1/future_trade				�ڻ��µ�										//POST /api/v1/future_batch_trade		�����µ�
	//{"order_id":862348954,"result":true}
	//string order_id	= "862348954";
	//comapi.DoFuture_Cancel(symbolcom,order_id,contract_type);	

	//}


	return 0;
}

