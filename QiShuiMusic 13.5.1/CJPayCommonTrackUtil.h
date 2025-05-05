@interface CJPayCommonTrackUtil : NSObject
+ (id)getBDPayCommonParamsWithResponse:showConfig:;
+ (id)getBytePayDeskCommonTrackerWithResponse:;
+ (id)getCashDeskCommonParamsWithResponse:defaultPayChannel:;
+ (id)p_bytePayMethodGetDefaultCardMsg:;
+ (id)p_bytePayMethodGetExpandingOpenPayType:sumInfoModel:;
+ (id)p_bytePayMethodGetRecommendType:;
+ (id)p_bytePayMethodGetTagTitle:sumInfoModel:;
+ (id)p_bytePayMethodTrackerWithResponse:model:;
+ (id)p_commonBytePayParamsWithResponse:;
@end
