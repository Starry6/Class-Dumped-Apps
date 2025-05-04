@interface AWEMissionLiveRecordService : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isBetweenStartTime:endTime:;
- (void)fetchRoomInfoWithWithSecuid:completion:;
- (id)transModelToDic:key:;
- (id)getRecordLiveMissionParamsFromChallenge:;
- (id)getRecordLiveMissionParamsFromMission:;
- (void)tryEnterMissionLiveRecord:challenge:failRoute:;
@end
