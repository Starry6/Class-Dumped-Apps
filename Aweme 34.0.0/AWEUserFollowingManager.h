@interface AWEUserFollowingManager : NSObject
@property (nonatomic) NSNumber minTime;
@property (nonatomic) NSNumber maxTime;
@property (nonatomic) BOOL hasMore;
- (void)fetchUserFollowingWithCompletion:;
- (id)init;
- (void)setMaxTime:;
- (void)setMinTime:;
- (id)maxTime;
- (void)setHasMore:;
- (id)minTime;
- (BOOL)hasMore;
- (void).cxx_destruct;
@end
