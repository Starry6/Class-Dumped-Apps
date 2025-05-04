@interface AWETrackerAddVideoDataManager : HTSService
@property (nonatomic) NSDictionary showtimeMap;
@property (nonatomic) NSDictionary playtimeMap;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)onServiceInit;
- (id)addVideoWatchingDataWithContext:;
- (BOOL)recordAdVideShowTime:;
- (id)currentAwemeModelWithContext:;
- (id)showtimeMap;
- (void)setShowtimeMap:;
- (void)setPlaytimeMap:;
- (id)playtimeMap;
- (void)pause:;
- (void).cxx_destruct;
@end
