@interface RUICustomImageTableViewCell : RemoteUITableViewCell
@property (nonatomic) UIImageView customImageViewInternal;
@property (nonatomic) UILabel customTextLabelInternal;
@property (nonatomic) UIStackView stackView;
@property (nonatomic) UIImageView customImageView;
@property (nonatomic) UILabel customTextLabel;
- (void)setStackView:;
- (id)stackView;
- (void).cxx_destruct;
- (id)customImageView;
- (void)_initializeViews;
- (id)customImageViewInternal;
- (void)setCustomImageViewInternal:;
- (id)_customImageViewInternal;
- (id)customTextLabel;
- (id)_customTextLabelInternal;
- (id)customTextLabelInternal;
- (void)setCustomTextLabelInternal:;
@end
