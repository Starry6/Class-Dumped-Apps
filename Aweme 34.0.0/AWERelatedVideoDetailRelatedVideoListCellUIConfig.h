@interface AWERelatedVideoDetailRelatedVideoListCellUIConfig : NSObject
@property (nonatomic) BOOL shouldShowTag;
@property (nonatomic) BOOL shouldShowGuideFlow;
@property (nonatomic) UIImage guideIcon;
@property (nonatomic) NSString guideTitle;
@property (nonatomic) BOOL shouldShowDig;
- (BOOL)shouldShowTag;
- (id)guideTitle;
- (id)guideIcon;
- (void)setGuideIcon:;
- (void)setGuideTitle:;
- (void)setShouldShowTag:;
- (void)setShouldShowGuideFlow:;
- (void)setShouldShowDig:;
- (BOOL)shouldShowGuideFlow;
- (BOOL)shouldShowDig;
- (void).cxx_destruct;
+ (id)guideFlowXiGuaConfig;
+ (id)configWithModel:context:index:;
+ (id)guideFlowQingTaoConfig;
+ (id)defaultConfig;
@end
