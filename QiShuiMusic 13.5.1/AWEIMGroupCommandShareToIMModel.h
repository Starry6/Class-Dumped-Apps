@interface AWEIMGroupCommandShareToIMModel : NSObject
@property (nonatomic) NSString groupCommand;
@property (nonatomic) NSString conversationID;
@property (nonatomic) BOOL shouldShowNotificationBar;
- (id)groupCommand;
- (id)initWithGroupCommand:conversationID:;
- (void)setGroupCommand:;
- (void)setShouldShowNotificationBar:;
- (BOOL)shouldShowNotificationBar;
- (void).cxx_destruct;
- (id)conversationID;
- (void)setConversationID:;
@end
