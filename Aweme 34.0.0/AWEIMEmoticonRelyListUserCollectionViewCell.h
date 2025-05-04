@interface AWEIMEmoticonRelyListUserCollectionViewCell : UICollectionViewCell
@property (nonatomic) UITableView tableView;
@property (nonatomic) AWEIMEmoticonReplyListSectionModel sectionModel;
@property (nonatomic) <AWEIMMessageInteractiveUserDelegate> delegate;
@property (nonatomic) AWEIMConversationContext conversationContext;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)p_setupUI;
- (void)renderWithModel:;
- (id)sectionModel;
- (id)tableView:cellForRowAtIndexPath:;
- (long long)tableView:numberOfRowsInSection:;
- (id)delegate;
- (void)tableView:didSelectRowAtIndexPath:;
- (void)setTableView:;
- (id)initWithFrame:;
- (id)tableView;
- (void)setFrame:;
- (void)setBounds:;
- (void).cxx_destruct;
- (double)tableView:heightForRowAtIndexPath:;
- (void)setSectionModel:;
- (void)setDelegate:;
- (id)conversationContext;
- (void)setConversationContext:;
@end
