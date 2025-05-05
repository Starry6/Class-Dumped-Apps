@interface CRBlockOutputRegion : CRCompositeOutputRegion
- (unsigned long long)type;
- (id)joiningDelimiter;
- (id)regionsSuitableForDataDetectorOutput;
+ (id)blockWithTextFeature:children:imageSize:confidenceThresholdProvider:;
+ (id)blockWithBlock:children:;
+ (id)blockWithLines:confidence:quad:baselineAngle:;
@end
