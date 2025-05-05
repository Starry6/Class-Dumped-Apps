@interface ARAudioData : NSObject
@property (nonatomic) double timestamp;
@property (nonatomic) ^{opaqueCMSampleBuffer=} sampleBuffer;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (id)sampleBuffer;
- (void)setTimestamp:;
- (double)timestamp;
- (id)initWithSampleBuffer:;
@end
