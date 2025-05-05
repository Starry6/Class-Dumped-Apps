@interface PostProcessorFactory : NSObject
- (id)postProcessorFromReader:originalPixelFormat:encodedFormat:encoderType:streamId:;
+ (id)defaultFactory;
@end
