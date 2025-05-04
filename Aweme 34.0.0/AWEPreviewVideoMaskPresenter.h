@interface AWEPreviewVideoMaskPresenter : AWEUnPaidVideoMaskPresenter
@property (nonatomic) AWEAwemeModel currentModel;
- (BOOL)shouldShowEffectiveView;
- (BOOL)shouldShowViewWithPeriod:;
- (BOOL)shouldAnimateWhenShown;
- (BOOL)shouldAnimateWhenHidden;
- (BOOL)shouldCheckViewStatusWhenDisplay;
- (void).cxx_destruct;
- (id)currentModel;
- (void)setCurrentModel:;
+ (BOOL)shouldActiveWithData:referString:logExtra:;
@end
