@interface AWEIMOfficialChatModel : AWEIMChatModel
@property (nonatomic) BOOL isChallenge;
@property (nonatomic) BOOL isFoldable;
@property (nonatomic) q deleteTime;
@property (nonatomic) q hiddenTime;
@property (nonatomic) AWENotificationModelNew noticeModel;
@property (nonatomic) q subsetScene;
- (id)noticeModel;
- (void)setNoticeModel:;
- (long long)deleteTime;
- (void)setDeleteTime:;
- (BOOL)isChallenge;
- (void)setIsChallenge:;
- (long long)subsetScene;
- (long long)hiddenTime;
- (void)setHiddenTime:;
- (BOOL)isFoldable;
- (void)setIsFoldable:;
- (id)as_displayNickname;
- (void)setSubsetScene:;
- (id)as_displayNicknameForType:;
- (id)interactionNoticeDisplyName;
- (id)fansDisplayName;
- (long long)fakeNoticeChatModelType;
- (void).cxx_destruct;
@end
