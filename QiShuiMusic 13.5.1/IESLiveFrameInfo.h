@interface IESLiveFrameInfo : NSObject
@property (nonatomic) ^{opaqueCMSampleBuffer=} sampleBuffer;
@property (nonatomic) Q index;
@property (nonatomic) Q loopCount;
- (id)initWithBuffer:index:loop:;
- (id)sampleBuffer;
- (unsigned long long)index;
- (unsigned long long)loopCount;
@end
