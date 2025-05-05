@interface ByteRTCSubscribeVideoConfig : NSObject
@property (nonatomic) q videoIndex;
@property (nonatomic) q priority;
- (void)setVideoIndex:;
- (long long)videoIndex;
- (void)setPriority:;
- (long long)priority;
@end
