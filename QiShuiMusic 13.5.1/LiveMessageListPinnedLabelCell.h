@interface LiveMessageListPinnedLabelCell : UICollectionViewCell
@property (nonatomic) UIImageView icon;
@property (nonatomic) UILabel label;
@property (nonatomic) BOOL hasLabelIcon;
- (BOOL)hasLabelIcon;
- (void)setHasLabelIcon:;
- (void)updateWithRoomIntroLabel:;
- (id)intrinsicContentSize;
- (id)icon;
- (void)setLabel:;
- (void)prepareForReuse;
- (id)label;
- (id)initWithFrame:;
- (void)setup;
- (void)setIcon:;
- (void).cxx_destruct;
@end
