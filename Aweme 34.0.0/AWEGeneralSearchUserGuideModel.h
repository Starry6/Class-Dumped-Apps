@interface AWEGeneralSearchUserGuideModel : AWEBaseApiModel
@property (nonatomic) BOOL showResultGuide;
@property (nonatomic) double resultGuideTime;
@property (nonatomic) BOOL showInFlowGuide;
@property (nonatomic) double inFlowGuideTime;
@property (nonatomic) double inFlowGuideDismissTime;
- (void)setShowResultGuide:;
- (void)setResultGuideTime:;
- (void)setShowInFlowGuide:;
- (void)setInFlowGuideTime:;
- (void)setInFlowGuideDismissTime:;
- (BOOL)showResultGuide;
- (double)resultGuideTime;
- (BOOL)showInFlowGuide;
- (double)inFlowGuideTime;
- (double)inFlowGuideDismissTime;
+ (id)JSONKeyPathsByPropertyKey;
@end
