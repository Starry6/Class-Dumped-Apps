@interface BDARVVideoPlayinfo : NSObject
@property (nonatomic) q watchedTime;
@property (nonatomic) q inspireTime;
- (void)setInspireTime:;
- (void)setWatchedTime:;
- (long long)inspireTime;
- (long long)watchedTime;
- (id)initWithDictionary:;
@end
