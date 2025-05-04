@interface AWEIMLiveFansGroupInviteContentView : UIView
@property (nonatomic) @? closeBlock;
@property (nonatomic) AWEIMLiveFansGroupInviteViewController liveFansGroupInviteVC;
@property (nonatomic) NSObject<AWEIMLiveFansGroupInviteContentViewDelegate> delegate;
- (void)setCloseBlock:;
- (id)closeBlock;
- (id)liveFansGroupInviteVC;
- (void)setLiveFansGroupInviteVC:;
- (void)configWithConversation:backgroundColor:;
- (void)p_closeFansGroupInviteContentView;
- (id)delegate;
- (void).cxx_destruct;
- (void)setDelegate:;
@end
