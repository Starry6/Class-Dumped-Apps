@interface CSJExpressEndcardViewModel : CSJExpressRewardFullScreenVM
- (void)getMRelatedMaterialMeta;
- (id)initViewModelWithExpressAdView:expressAdViews:nativeAd:rootViewController:;
- (void)vmLoadData;
+ (void)getMRelatedMaterialMetaWithSlot:materialMeta:resultBlock:;
@end
