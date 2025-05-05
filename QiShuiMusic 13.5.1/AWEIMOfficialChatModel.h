@interface AWEIMOfficialChatModel : AWEIMChatModel
@property (nonatomic) BOOL isChallenge;
@property (nonatomic) AWENotificationModelNew noticeModel;
- (void)setIsChallenge:;
- (void)setNoticeModel:;
- (id)as_displayNickname;
- (id)as_displayNicknameForType:;
- (BOOL)isChallenge;
- (id)noticeModel;
- (void).cxx_destruct;
@end
