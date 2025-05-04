@interface AWEUserWorkCellReachComponent : AWEUserWorkCellDiagnoseComponent
@property (nonatomic) NSDictionary commonParams;
@property (nonatomic) @? hiddenBlock;
@property (nonatomic) AWECodeGenCoverTopLeftCornerModel cornerModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)trackParams;
- (id)commonParams;
- (void)setCommonParams:;
- (id)coverDetectResult;
- (BOOL)dynamicComponent;
- (id)hiddenBlock;
- (void)setCornerModel:;
- (id)cornerModel;
- (id)bussinessTrackParams;
- (void)setHiddenBlock:;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithData:context:;
+ (id)componentWithData:context:;
+ (id)coverTopLeftCornerModelWithData:;
@end
