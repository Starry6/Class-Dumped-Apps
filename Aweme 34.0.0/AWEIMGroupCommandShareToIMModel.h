@interface AWEIMGroupCommandShareToIMModel : NSObject
@property (nonatomic) NSString groupCommand;
@property (nonatomic) NSString conversationID;
@property (nonatomic) BOOL shouldShowNotificationBar;
- (BOOL)shouldShowNotificationBar;
- (void)setShouldShowNotificationBar:;
- (void)setGroupCommand:;
- (id)groupCommand;
- (id)initWithGroupCommand:conversationID:;
- (id)conversationID;
- (void).cxx_destruct;
- (void)setConversationID:;
@end
