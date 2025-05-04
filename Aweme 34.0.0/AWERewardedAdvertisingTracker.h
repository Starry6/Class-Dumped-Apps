@interface AWERewardedAdvertisingTracker : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)trackEvent:model:extraParams:object:;
+ (id)rewardedAdvertisingPageCommonParamsWithModel:referString:logExtraDic:;
+ (id)rewardedAdvertisingCommonParamsWithModel:;
+ (void)monitorIAAVideoPlay:model:error:extraParams:;
+ (id)commonParamsForMix:;
+ (id)commonParamsForLongVideo:;
+ (id)commonParamsForPlaylet:;
+ (unsigned long long)videoTypeForModel:;
+ (id)commonParamsForVideo:;
+ (void)monitorRewardedAdvertising:model:status:errorInfos:errorCode:categoryParams:extraParams:;
+ (BOOL)enableSetItemIdToFromGroupID:logExtra:;
+ (id)rewardPreviewConfigParamsWithModel:;
+ (id)rewardedAdvertisingVideoPlayParams:;
+ (id)paramsForRewardParamsWithModel:;
+ (id)playletContentsaleTypeWithModel:;
+ (id)getPlayletSaleTypeCombinationWithIsIaa:isIap:isVip:isPreAccess:;
+ (long long)rewardPaymentStatusWithModel:;
+ (id)monitorErrorInformationForServiceName:;
@end
