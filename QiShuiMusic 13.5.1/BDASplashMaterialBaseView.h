@interface BDASplashMaterialBaseView : BDASplashBaseView
@property (nonatomic) <BDASplashMaterialViewDelegate> delegate;
@property (nonatomic) BDASplashMaterialViewModel model;
- (id)initWithFrame:delegate:viewModel:;
- (void)loadResource;
- (id)videoDurationParams;
- (id)model;
- (void)setModel:;
- (void)setDelegate:;
- (double)videoDuration;
- (id)delegate;
- (void).cxx_destruct;
@end
