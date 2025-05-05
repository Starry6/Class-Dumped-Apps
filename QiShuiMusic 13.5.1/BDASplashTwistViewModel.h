@interface BDASplashTwistViewModel : BDASplashComplianceBaseViewModel
@property (nonatomic) BDImage progressImage;
@property (nonatomic) BDImage guideImage;
@property (nonatomic) BDImage buttonImage;
- (long long)getModelType;
- (id)getViewWithFrame:viewHolder:;
- (BOOL)loadResource;
- (id)buttonImage;
- (void).cxx_destruct;
- (void)setProgressImage:;
- (id)progressImage;
- (id)guideImage;
- (void)setGuideImage:;
- (void)setButtonImage:;
+ (void)downloadResourceWithComplianceModel:downloadBlock:;
@end
