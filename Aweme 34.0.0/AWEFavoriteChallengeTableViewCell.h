@interface AWEFavoriteChallengeTableViewCell : AWEUIFavoriteTableViewCell
- (double)coverImageHeight;
- (void)updateSubTitleLabelText:;
- (void)updateTitleLabelText:model:;
- (void)setHighlighted:animated:;
- (void)configureWithModel:;
+ (double)extraHeight;
+ (BOOL)fontOpt;
+ (id)identifier;
+ (double)cellHeight;
@end
