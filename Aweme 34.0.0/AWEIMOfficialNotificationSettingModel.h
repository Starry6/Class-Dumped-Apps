@interface AWEIMOfficialNotificationSettingModel : NSObject
@property (nonatomic) NSArray noticeSubscribes;
@property (nonatomic) NSArray noticeConfigs;
@property (nonatomic) BOOL isStickOnTop;
@property (nonatomic) BOOL canDisturb;
@property (nonatomic) BOOL disturb;
@property (nonatomic) BOOL foldStatus;
@property (nonatomic) q group;
@property (nonatomic) NSString accountType;
- (BOOL)foldStatus;
- (void)setFoldStatus:;
- (void)setIsStickOnTop:;
- (BOOL)isStickOnTop;
- (void)setDisturb:;
- (BOOL)disturb;
- (BOOL)canDisturb;
- (void)setCanDisturb:;
- (id)noticeConfigs;
- (void)setNoticeConfigs:;
- (id)noticeSubscribes;
- (void)setNoticeSubscribes:;
- (void)setGroup:;
- (long long)group;
- (void)setAccountType:;
- (id)accountType;
- (void).cxx_destruct;
@end
