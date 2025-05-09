@interface AKAuthorizationScopeDetailTableViewCell : UITableViewCell
@property (nonatomic) UIImageView leadingCheckmarkView;
@property (nonatomic) UILayoutGuide mainGuide;
@property (nonatomic) UILayoutGuide mainLabelFirstLineGuide;
@property (nonatomic) UILayoutGuide scopeLabelFirstLineGuide;
@property (nonatomic) NSLayoutConstraint minimumHeightConstraint;
@property (nonatomic) NSLayoutConstraint mainLabelLeadingConstraint;
@property (nonatomic) Q internalCheckmarkStyle;
@property (nonatomic) BOOL internalChecked;
@property (nonatomic) UIImageView scopeImageView;
@property (nonatomic) double minimumHeight;
@property (nonatomic) Q checkmarkStyle;
@property (nonatomic) BOOL checked;
@property (nonatomic) UILabel scopeLabel;
@property (nonatomic) UILabel mainLabel;
@property (nonatomic) UILabel mainDetailLabel;
@property (nonatomic) UIImage scopeImage;
- (void)setMinimumHeight:;
- (id)initWithStyle:reuseIdentifier:;
- (double)minimumHeight;
- (id)_newLabel;
- (void)layoutSubviews;
- (void)_setupViews;
- (void).cxx_destruct;
- (id)_checkmarkImage;
- (void)setChecked:;
- (id)minimumHeightConstraint;
- (void)_setupLayout;
- (BOOL)isChecked;
- (id)mainLabel;
- (id)_checkmarkImageView;
- (void)_setupScopeImageView;
- (void)_setSeparatorIndentToMainLabel;
- (BOOL)_isLTR;
- (unsigned long long)checkmarkStyle;
- (void)setCheckmarkStyle:;
- (void)_setCheckMarkStyleLeadingChecked:;
- (void)_setCheckmarkStyleTrailingChecked:;
- (void)setScopeImage:;
- (id)_checkmarkCircleImageViewChecked:;
- (id)_selectedCheckmarkCircleImageView;
- (id)_unselectedCheckmarkCircleImageView;
- (id)_clearImage;
- (id)_circleImage;
- (id)_checkmarkCircleImage;
- (id)scopeLabel;
- (id)mainDetailLabel;
- (id)scopeImage;
- (id)leadingCheckmarkView;
- (void)setLeadingCheckmarkView:;
- (id)mainGuide;
- (id)mainLabelFirstLineGuide;
- (id)scopeLabelFirstLineGuide;
- (id)mainLabelLeadingConstraint;
- (unsigned long long)internalCheckmarkStyle;
- (void)setInternalCheckmarkStyle:;
- (BOOL)internalIsChecked;
- (void)setInternalChecked:;
- (id)scopeImageView;
- (void)setScopeImageView:;
@end
