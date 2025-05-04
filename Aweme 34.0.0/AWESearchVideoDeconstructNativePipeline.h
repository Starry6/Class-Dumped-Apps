@interface AWESearchVideoDeconstructNativePipeline : AWESearchCachalotCardPipeline
@property (nonatomic) UIView separateView;
@property (nonatomic) NSString referString;
- (id)referString;
- (void)setReferString:;
- (void)setSeparateView:;
- (id)separateView;
- (id)transformBusinessDataItem:ofDataType:;
- (void)updateComponentView:withViewModel:;
- (id)componentViewWithViewModel:;
- (id)componentViewSizeWithViewModel:containerWidth:;
- (void)attachComponentView:usingViewModel:;
- (void).cxx_destruct;
@end
