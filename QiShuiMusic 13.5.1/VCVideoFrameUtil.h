@interface VCVideoFrameUtil : NSObject
+ (id)newXPCDictionaryWithCVPixelBuffer:depthPixelBuffer:time:;
+ (id)newCVPixelBufferFromXPCDictionary:isDepth:;
+ (id)CMTimeFromXPCDictionary:;
@end
