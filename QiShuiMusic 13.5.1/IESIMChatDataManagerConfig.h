@interface IESIMChatDataManagerConfig : NSObject
@property (nonatomic) NSString uid;
@property (nonatomic) BOOL only1To1Chat;
@property (nonatomic) BOOL needUpdateConversationForSecUid;
@property (nonatomic) BOOL needUpgradeForGroup;
@property (nonatomic) q firstPageSize;
- (BOOL)needUpdateConversationForSecUid;
- (long long)firstPageSize;
- (BOOL)needUpgradeForGroup;
- (BOOL)only1To1Chat;
- (void)setFirstPageSize:;
- (void)setNeedUpdateConversationForSecUid:;
- (void)setNeedUpgradeForGroup:;
- (void)setOnly1To1Chat:;
- (id)uid;
- (void)setUid:;
- (void).cxx_destruct;
@end
