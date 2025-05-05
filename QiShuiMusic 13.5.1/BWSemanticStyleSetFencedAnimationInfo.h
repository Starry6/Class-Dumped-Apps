@interface BWSemanticStyleSetFencedAnimationInfo : BWFencedAnimationInfo
@property (nonatomic) FigCaptureSemanticStyleSet semanticStyleSet;
- (void)dealloc;
- (id)description;
- (id)semanticStyleSet;
+ (id)fencedAnimationInfoWithSemanticStyleSet:fencePortSendRight:;
@end
