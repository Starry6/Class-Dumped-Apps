@interface AWESearchAIGCNativePipeline : AWESearchCachalotCardPipeline
@property (nonatomic) NSString referString;
- (id)referString;
- (void)setReferString:;
- (id)transformBusinessDataItem:ofDataType:;
- (void)updateComponentView:withViewModel:;
- (id)componentViewWithViewModel:;
- (id)componentViewSizeWithViewModel:containerWidth:;
- (void)attachComponentView:usingViewModel:;
- (void).cxx_destruct;
@end
