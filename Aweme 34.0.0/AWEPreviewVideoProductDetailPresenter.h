@interface AWEPreviewVideoProductDetailPresenter : AWEUnPaidVideoProductDetailPresenter
@property (nonatomic) AWEAwemeModel currentModel;
- (BOOL)isPreviewVideo;
- (double)currentPlayProgress;
- (BOOL)shouldShowViewWithPeriod:;
- (BOOL)shouldAnimateWhenShown;
- (BOOL)shouldAnimateWhenHidden;
- (BOOL)shouldCheckViewStatusWhenDisplay;
- (void).cxx_destruct;
- (id)currentModel;
- (void)setCurrentModel:;
+ (BOOL)shouldActiveWithData:referString:logExtra:;
@end
