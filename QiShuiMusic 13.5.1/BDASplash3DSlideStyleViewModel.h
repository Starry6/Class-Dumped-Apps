@interface BDASplash3DSlideStyleViewModel : BDASplashComplianceBaseViewModel
@property (nonatomic) BDImage guideIcon;
- (id)getViewWithFrame:viewHolder:;
- (id)guideIcon;
- (BOOL)loadResource;
- (void)setGuideIcon:;
- (void).cxx_destruct;
+ (void)downloadResourceWithComplianceModel:downloadBlock:;
@end
