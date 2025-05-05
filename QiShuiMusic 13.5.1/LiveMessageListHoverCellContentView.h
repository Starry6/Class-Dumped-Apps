@interface LiveMessageListHoverCellContentView : UIView
@property (nonatomic) HTSLiveMessageListNode node;
@property (nonatomic) UIView titleContainer;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel subtitleLabel;
@property (nonatomic) UIImageView hoverIcon;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)hoverIcon;
- (id)pluginLayoutContentSize;
- (void)refreshIconWithMessage:;
- (void)refreshWith:;
- (void)setHoverIcon:;
- (id)node;
- (id)viewType;
- (void)setTitleLabel:;
- (id)subtitleLabel;
- (void)setSubtitleLabel:;
- (id)initWithFrame:;
- (void)setup;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setNode:;
- (id)titleContainer;
- (void)setTitleContainer:;
@end
