@interface IESLiveEffectAvailableDiskSpaceConfig : NSObject
@property (nonatomic) q availableDiskSpace;
@property (nonatomic) NSDate lastFetchAvailableDiskSpaceDate;
@property (nonatomic) q fetchAvailableDiskSpaceTimeInterval;
@property (nonatomic) BOOL enablefetchAvailableDiskSpace;
@property (nonatomic) NSArray spaceRank;
- (id)lastFetchAvailableDiskSpaceDate;
- (BOOL)enablefetchAvailableDiskSpace;
- (long long)fetchAvailableDiskSpaceTimeInterval;
- (id)getAssetAPIExtraWithRoomModel:momentType:;
- (void)setAvailableDiskSpace:;
- (void)setEnablefetchAvailableDiskSpace:;
- (void)setFetchAvailableDiskSpaceTimeInterval:;
- (void)setLastFetchAvailableDiskSpaceDate:;
- (void)setSpaceRank:;
- (id)spaceRank;
- (id)init;
- (long long)availableDiskSpace;
- (void).cxx_destruct;
@end
