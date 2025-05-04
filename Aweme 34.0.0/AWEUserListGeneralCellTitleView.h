@interface AWEUserListGeneralCellTitleView : UIView
@property (nonatomic) <AWEUserListGeneralCellConfigProtocol> config;
@property (nonatomic) UIView titleContainerView;
@property (nonatomic) UIStackView stackView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) YYLabel subtitleLabel;
@property (nonatomic) AWEUserListGeneralCellInsetsLabel relationLabel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)relationLabel;
- (void)setRelationLabel:;
- (void)initView;
- (void)setConfig:;
- (id)stackView;
- (void)setStackView:;
- (void)updateWithConfig:;
- (id)config;
- (id)initWithFrame:;
- (void)setSubtitleLabel:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)layoutSubviews;
- (id)subtitleLabel;
- (id)titleContainerView;
- (void)setTitleContainerView:;
@end
