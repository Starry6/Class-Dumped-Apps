@interface AWESearchAIGCBubbleTextView : UITextView
@property (nonatomic) @? sendNewQueryBlock;
@property (nonatomic) @? copyBlock;
- (void)searchAction;
- (void)copyAction;
- (id)sendNewQueryBlock;
- (void)setupCustomMenu;
- (void)setSendNewQueryBlock:;
- (void).cxx_destruct;
- (BOOL)canPerformAction:withSender:;
- (id)copyBlock;
- (void)setCopyBlock:;
@end
