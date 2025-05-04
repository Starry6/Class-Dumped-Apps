@interface AWERecordInspirationTrackerImpl : NSObject
@property (nonatomic) NSMutableDictionary standingTimeTrack;
@property (nonatomic) double startTimeInterval;
@property (nonatomic) AWERecordInspirationCategoryItem categoryItem;
@property (nonatomic) BOOL currentIsTrackDuration;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setCategoryItem:;
- (void)startStandingTimeTrackWithCategoryItem:isFeedPage:;
- (void)resetStandingStartTime;
- (void)sendExitStandingTimeTrackWithType:;
- (void)setCurrentIsTrackDuration:;
- (id)standingTimeTrack;
- (BOOL)currentIsTrackDuration;
- (void)setStandingTimeTrack:;
- (void).cxx_destruct;
- (id)categoryItem;
- (void)setStartTimeInterval:;
- (double)startTimeInterval;
@end
