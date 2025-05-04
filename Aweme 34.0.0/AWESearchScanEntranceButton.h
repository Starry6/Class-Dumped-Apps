@interface AWESearchScanEntranceButton : DUXBaseButton
@property (nonatomic) Q type;
- (void)updateWithType:model:completion:;
- (void)setImageView;
- (void)resetBorder;
- (void)setImageWithModel:completion:;
- (void)setCoverForAlbum:completion:;
- (void)setCoverForVideo:completion:;
- (void)setUIProperties:;
- (id)init;
- (unsigned long long)type;
- (void)setType:;
- (void)layoutSubviews;
@end
