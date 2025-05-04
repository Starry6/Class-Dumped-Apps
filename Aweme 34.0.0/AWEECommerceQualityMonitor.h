@interface AWEECommerceQualityMonitor : NSObject
- (void)trackGoodsPageDurationTrackEvent:;
- (id)createPageDurationTrackEventWithPageID:extra:;
- (void)updatePageRenderDurationEvent:;
- (void)updatePageInteractDurationAndTrackEvent:;
- (void)trackGoodsAPIFeedbackEvent:;
+ (id)sharedInstance;
@end
