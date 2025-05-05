@interface IESLiveVSGiftSectionGuestCell : UIView
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIView contentView;
@property (nonatomic) IESLiveGradientView divider;
@property (nonatomic) <IESLiveVSGiftSectionItem> item;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)p_loadData;
- (id)item;
- (id)contentView;
- (void)setTitleLabel:;
- (void)updateWithItem:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setContentView:;
- (id)titleLabel;
- (void)setupUI;
- (id)divider;
- (void)setDivider:;
@end
