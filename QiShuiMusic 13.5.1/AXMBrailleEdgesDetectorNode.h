@interface AXMBrailleEdgesDetectorNode : AXMEvaluationNode
- (void)evaluate:metrics:;
- (id)_generateResultFromImage:canvasDescription:invert:;
- (unsigned char)_mapLuminance:toDiscreteNumber:invert:;
- (id)_processImage:analaysisOptions:;
+ (BOOL)isSupported;
+ (BOOL)supportsSecureCoding;
+ (id)title;
@end
