@interface UIPickerTableViewTitledCell : UIPickerTableViewCell
@property (nonatomic) NSString title;
@property (nonatomic) NSAttributedString attributedTitle;
@property (nonatomic) UILabel _titleLabel;
@property (nonatomic) BOOL _isAttributed;
- (BOOL)_isAttributed;
- (id)attributedTitle;
- (void)setTitle:;
- (void)prepareForReuse;
- (id)initWithStyle:reuseIdentifier:textColor:forceTextAlignmentCentered:;
- (void)setAttributedTitle:;
- (id)title;
- (void).cxx_destruct;
- (void)_setIsCenterCell:shouldModifyAlphaOfView:;
- (id)_titleLabel;
- (BOOL)_canBeReusedInPickerView;
@end
