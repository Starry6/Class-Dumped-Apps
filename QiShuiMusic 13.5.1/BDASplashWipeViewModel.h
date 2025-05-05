@interface BDASplashWipeViewModel : BDASplashComplianceBaseViewModel
@property (nonatomic) BDImage guideIcon;
@property (nonatomic) BDImage backgroundImage;
- (id)getViewWithFrame:viewHolder:;
- (id)guideIcon;
- (BOOL)loadResource;
- (void)setGuideIcon:;
- (void)setBackgroundImage:;
- (id)backgroundImage;
- (void).cxx_destruct;
+ (void)downloadResourceWithComplianceModel:downloadBlock:;
@end
