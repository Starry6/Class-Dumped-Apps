@interface AWEExtensionSecUIDStorage : AWEExtensionStorage
@property (nonatomic) NSArray trackedEvents;
- (BOOL)isEmptyString:;
- (id)trackedEvents;
- (id)secUIDStorageKey;
- (id)loginStatusStorageKey;
- (id)getSecUIDsTrackingParamsForTargetSecUID:groupName:;
- (id)extractSecIDsWithStatus:;
- (void)updateSecUID:status:;
- (void)updateLoginStatus:;
- (id)getSecUIDsTrackingParamsForTargetSecUID:;
- (void).cxx_destruct;
+ (id)sharedSecUIDStorage;
@end
