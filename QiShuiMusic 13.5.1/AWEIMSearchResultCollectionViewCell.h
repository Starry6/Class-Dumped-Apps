@interface AWEIMSearchResultCollectionViewCell : UICollectionViewCell
@property (nonatomic) <AWEIMSearchResultCellItemProtocol> item;
@property (nonatomic) UIImageView avatarImageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel subTitleLabel;
@property (nonatomic) UILabel timeLabel;
@property (nonatomic) UIView onlineDotBgView;
@property (nonatomic) UIView onlineDotView;
@property (nonatomic) UIView bottomLine;
@property (nonatomic) UIImageView nextTapImageView;
@property (nonatomic) {CGSize=dd} subTitleAttributextSize;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)onlineDotBgView;
- (id)attrForText:highlightRange:attr:;
- (void)configAvatarImageForChat:;
- (id)nextTapImageView;
- (id)onlineDotView;
- (id)onlineDotViewColor;
- (void)renderModel:context:;
- (void)setNextTapImageView:;
- (void)setOnlineDotBgView:;
- (void)setOnlineDotView:;
- (void)setSubTitleAttributextSize:;
- (id)subTitleAttributextSize;
- (void)setTimeLabel:;
- (id)timeLabel;
- (id)item;
- (void)setTitleLabel:;
- (void)layoutSubviews;
- (id)initWithFrame:;
- (void)setItem:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)avatarImageView;
- (void)setAvatarImageView:;
- (id)subTitleLabel;
- (void)setSubTitleLabel:;
- (id)bottomLine;
- (void)setBottomLine:;
- (void)_setupUI;
+ (id)identifier;
@end
