@interface IESLiveSaaSStickerListCollectionViewCell : UICollectionViewCell
@property (nonatomic) UIImageView iconView;
@property (nonatomic) IESLiveSaaSStickerItemModel model;
@property (nonatomic) BOOL disabled;
- (void)addMaskLayer;
- (void)configWithModel:;
- (void)setStickerSelected:;
- (id)model;
- (void)setDisabled:;
- (void)setModel:;
- (void)layoutSubviews;
- (id)iconView;
- (void)setIconView:;
- (BOOL)disabled;
- (id)initWithFrame:;
- (void).cxx_destruct;
+ (id)identifier;
@end
