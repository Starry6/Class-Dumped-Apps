@interface VEAlgorithmInputDataVideoMeta : NSObject
@property (nonatomic) q frameIndex;
@property (nonatomic) q frameId;
@property (nonatomic) double timeStamp;
@property (nonatomic) BOOL isLast;
- (void)setIsLast:;
- (long long)frameId;
- (void)setFrameId:;
- (double)timeStamp;
- (void)setTimeStamp:;
- (BOOL)isLast;
- (long long)frameIndex;
- (void)setFrameIndex:;
@end
