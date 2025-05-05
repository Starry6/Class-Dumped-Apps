@interface PreProcessorFactory : NSObject
- (id)preProcessorForFormat:recordingConfiguration:;
+ (id)defaultFactory;
@end
