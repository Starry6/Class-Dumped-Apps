@interface AWEIMLiveGroupAnnouncementMessage : AWEIMMessage
@property (nonatomic) q announcementId;
@property (nonatomic) NSString content;
@property (nonatomic) q scheduleTimeInLongLong;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithContentDict:;
- (id)contentComponentName;
- (long long)scheduleTimeInLongLong;
- (long long)announcementId;
- (void)setAnnouncementId:;
- (id)getContentDict;
- (BOOL)isUserCellType;
- (BOOL)enableBubbleColorWithType:isQuoteReply:;
- (BOOL)supportRefactorCell;
- (id)supportMessageMenuTypeList;
- (BOOL)isAllowedCellEdit;
- (BOOL)shouldShowNicknameWithMessageType;
- (void)setScheduleTimeInLongLong:;
- (id)content;
- (void)setContent:;
- (void).cxx_destruct;
+ (long long)timestampFromMsg:;
+ (id)timeTextFromMsg:;
@end
