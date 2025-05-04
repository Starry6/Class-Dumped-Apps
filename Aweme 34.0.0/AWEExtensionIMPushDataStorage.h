@interface AWEExtensionIMPushDataStorage : AWEExtensionStorage
@property (nonatomic) BOOL containIMPush;
@property (nonatomic) NSString currentUserID;
@property (nonatomic) NSArray imPushSettings;
@property (nonatomic) BOOL enableGetImPushTest;
- (void)setCurrentUserID:;
- (id)im_containIMPushKey;
- (id)im_currentUserIDKey;
- (id)im_pushSettings;
- (id)im_enablePushTest;
- (id)im_convReadIndexDictWithSecUID:;
- (id)p_trimReadIndexDict:limitCount:;
- (void)setContainIMPush:;
- (BOOL)containIMPush;
- (void)setImPushSettings:;
- (id)imPushSettings;
- (void)setEnableGetImPushTest:;
- (void)recordReadIndexOfConvID:readIndex:secUserID:limitCount:;
- (long long)readIndexOfConvID:secUserID:;
- (BOOL)enableGetImPushTest;
- (id)currentUserID;
+ (id)sharedIMPushDataStorage;
@end
