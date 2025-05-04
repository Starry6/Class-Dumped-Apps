@interface AWEIMFeedVideoCacheItem : NSObject
@property (nonatomic) AWEAwemeModel awemModel;
@property (nonatomic) double timestamp;
- (void)setAwemModel:;
- (id)awemModel;
- (BOOL)isValidFeed;
- (double)timestamp;
- (void)setTimestamp:;
- (void).cxx_destruct;
@end
