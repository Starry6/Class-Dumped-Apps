@interface FASaveScreenTimeSettingsCacheRequest : FAFamilyCircleRequest
@property (nonatomic) NSNumber memberDSID;
@property (nonatomic) FAScreentimeSettingsObjectCache object;
- (void)startRequestWithCompletionHandler:;
- (void).cxx_destruct;
- (id)object;
- (id)memberDSID;
- (id)initWithFamilyMemberDSID:screentimeObject:;
- (void)setMemberDSID:;
@end
