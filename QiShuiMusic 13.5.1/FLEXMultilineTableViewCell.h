@interface FLEXMultilineTableViewCell : FLEXTableViewCell
@property (nonatomic) UILabel _titleLabel;
@property (nonatomic) UILabel _subtitleLabel;
@property (nonatomic) BOOL constraintsUpdated;
- (void)postInit;
- (id)_titleLabel;
- (id)_subtitleLabel;
- (BOOL)constraintsUpdated;
- (void)setConstraintsUpdated:;
- (void).cxx_destruct;
+ (id)labelInsets;
+ (double)preferredHeightWithAttributedText:maxWidth:style:showsAccessory:;
@end
