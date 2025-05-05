@interface MSMessageListItemSelection : NSObject
@property (nonatomic) NSArray messageListItems;
@property (nonatomic) NSArray mailboxes;
@property (nonatomic) BOOL isSelectAll;
- (void).cxx_destruct;
- (id)mailboxes;
- (id)initWithMessageListItems:;
- (id)initWithMailboxes:excludedMessageListItems:;
- (id)messageListItems;
- (BOOL)isSelectAll;
@end
