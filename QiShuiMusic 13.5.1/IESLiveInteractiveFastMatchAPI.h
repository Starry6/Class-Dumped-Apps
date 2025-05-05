@interface IESLiveInteractiveFastMatchAPI : HTSLiveApi
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)fetchFastMatchShowEntranceWithRoomId:completion:;
- (void)fetchMatchDataWithParams:completion:;
- (void)requestFastMatchV2:completion:;
- (void)updateAudienceSettingsWithSettingData:roomID:completion:;
@end
