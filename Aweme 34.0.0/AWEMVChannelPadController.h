@interface AWEMVChannelPadController : AWEDCFeedBaseController
@property (nonatomic) double lastWidth;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)clearSectionViewModelsHeight;
- (id)padConfig;
- (void)dispatchCellScreenWillRotate;
- (void)dispatchCellScreenDidRotate;
- (void)handleViewBreakPointDidChange;
- (void)containerViewWillLayoutSubviews;
- (double)lastWidth;
- (void)setLastWidth:;
@end
