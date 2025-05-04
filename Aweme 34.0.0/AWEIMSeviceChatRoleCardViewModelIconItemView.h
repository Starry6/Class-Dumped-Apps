@interface AWEIMSeviceChatRoleCardViewModelIconItemView : UIButton
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UILabel label;
@property (nonatomic) AWEIMSeviceChatRoleCardViewModelIconItem item;
- (void)renderModel:;
- (void)updateLabelColor;
- (void)setLabel:;
- (id)init;
- (void)setItem:;
- (id)item;
- (id)label;
- (id)iconImageView;
- (void).cxx_destruct;
- (void)setIconImageView:;
@end
