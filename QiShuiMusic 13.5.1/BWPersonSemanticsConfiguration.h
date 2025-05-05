@interface BWPersonSemanticsConfiguration : BWInferenceConfiguration
@property (nonatomic) I enabledSemantics;
- (unsigned int)enabledSemantics;
- (void)setEnabledSemantics:;
+ (unsigned int)personSemanticForAttachedMediaKey:;
@end
