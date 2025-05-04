@interface AWEPayTransferAccountsNotifyContentView : UIView
@property (nonatomic) UIImageView exampleImageView;
@property (nonatomic) UILabel contentLabel;
@property (nonatomic) double dialogInnerWidth;
@property (nonatomic) BOOL isGroup;
- (void)p_setupUI;
- (double)dialogInnerWidth;
- (id)initWithDialogInnerWidth:;
- (void)setDialogInnerWidth:;
- (id)exampleImageView;
- (void)setExampleImageView:;
- (void)setIsGroup:;
- (BOOL)isGroup;
- (void).cxx_destruct;
- (id)contentLabel;
- (void)setContentLabel:;
@end
