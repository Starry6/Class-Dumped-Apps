@interface CSJNativeExpressAdConverter : NSObject
@property (nonatomic) CSJAdSlot adSlot;
@property (nonatomic) NSMutableArray nativeExpressAdViewArray;
@property (nonatomic) <CSJNativeExpressAdConverterDelegate> delegate;
- (id)initWithAdSlot:;
- (void)safeDelegate_nativeExpressAdConverter:nativeExpressAdViewArray:;
- (id)adSlot;
- (void)convertWithNativeAdArray:;
- (id)nativeExpressAdViewArray;
- (void)pbu_adjustSlotViewSizeIfNeedWithNativeAd:;
- (void)pbu_fetchTemplateDataWithNativeAd:group:;
- (id)pbu_nativeExpressAdViewWithNativeAd:;
- (void)pbu_preloadImagesWithNativeAd:;
- (id)safeDelegate_expressAdViewDelegateInNativeExpressAdConverter:;
- (id)safeDelegate_expressAdViewDismissDelegateInNativeExpressAdConverter:;
- (id)safeDelegate_expressAdViewExtensionDelegateInNativeExpressAdConverter:;
- (void)safeThread_convertWithNativeAdArray:;
- (void)setAdSlot:;
- (void)setNativeExpressAdViewArray:;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
@end
