@interface AWEExtensionSecUIDFileStorage : AWEExtensionStorage
@property (nonatomic) NSURL fileURL;
- (BOOL)isEmptyString:;
- (id)secUIDStorageKey;
- (id)loginStatusStorageKey;
- (id)getSecUIDsTrackingParamsForTargetSecUID:groupName:;
- (id)extractSecIDsWithStatus:;
- (void)updateSecUID:status:;
- (void)updateLoginStatus:;
- (id)getSecUIDsTrackingParamsForTargetSecUID:;
- (id)fileURL;
- (void)setFileURL:;
- (void).cxx_destruct;
- (void)reset;
- (BOOL)loginStatus;
+ (id)sharedSecUIDStorage;
@end
