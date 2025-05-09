@interface AWEIMMediaImagePickerCollectionViewCell : AWEIMMediaPickerCollectionViewCell
@property (nonatomic) UILabel hintLabel;
@property (nonatomic) UIView touchView;
@property (nonatomic) {CGSize=dd} touchSize;
@property (nonatomic) UIView<IESIMGradientViewProtocol> gradientView;
@property (nonatomic) UIView disableMaskView;
@property (nonatomic) UIImageView favouriteImageView;
@property (nonatomic) AWEIMSelectableStatusView selectStatusView;
@property (nonatomic) @? didTapdSelectedArea;
- (id)touchView;
- (void)setTouchView:;
- (void)renderWithModel:;
- (void)createComponents;
- (id)selectStatusView;
- (void)markCellAsDisable:;
- (void)setDidTapdSelectedArea:;
- (id)disableMaskView;
- (id)favouriteImageView;
- (void)setTouchSize:;
- (id)touchSize;
- (void)tapOnSelectImage:;
- (id)didTapdSelectedArea;
- (void)setSelectStatusView:;
- (void)setDisableMaskView:;
- (void)setFavouriteImageView:;
- (id)gradientView;
- (void)prepareForReuse;
- (void).cxx_destruct;
- (void)setGradientView:;
- (unsigned long long)accessibilityTraits;
- (id)hintLabel;
- (void)setHintLabel:;
- (void)layoutComponents;
@end
