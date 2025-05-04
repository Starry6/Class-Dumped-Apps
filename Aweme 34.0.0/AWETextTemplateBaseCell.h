@interface AWETextTemplateBaseCell : UICollectionViewCell
@property (nonatomic) IESEffectModel sticker;
@property (nonatomic) BOOL stickerSelected;
@property (nonatomic) Q stickerStatus;
@property (nonatomic) UIColor selectedBorderColor;
- (id)selectedBorderColor;
- (void)setSelectedBorderColor:;
- (BOOL)stickerSelected;
- (void)setStickerSelected:animated:;
- (void)setStickerStatus:;
- (unsigned long long)stickerStatus;
- (void).cxx_destruct;
- (id)sticker;
- (void)setSticker:;
@end
