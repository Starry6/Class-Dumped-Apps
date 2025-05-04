@interface AWESearchCachalotVideoCardPipeline : AWESearchCachalotCardPipeline
@property (nonatomic) NSString referString;
- (id)referString;
- (void)setReferString:;
- (id)transformBusinessDataItem:ofDataType:;
- (void)updateComponentView:withViewModel:;
- (id)componentViewWithViewModel:;
- (id)componentViewSizeWithViewModel:containerWidth:;
- (void).cxx_destruct;
+ (BOOL)isVideoTabWaterfall;
+ (BOOL)addVideoCachalotDebugLog;
@end
