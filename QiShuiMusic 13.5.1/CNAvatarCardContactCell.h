@interface CNAvatarCardContactCell : CNAvatarCardActionCell
@property (nonatomic) UIImageView contactImageView;
- (void)reloadData;
- (void)awakeFromNib;
- (void)prepareForReuse;
- (void)_updateFonts;
- (void).cxx_destruct;
- (BOOL)moreHighlighted;
- (id)contactImageView;
- (void)setContactImageView:;
@end
