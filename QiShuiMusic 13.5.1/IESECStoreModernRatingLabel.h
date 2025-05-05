@interface IESECStoreModernRatingLabel : UILabel
@property (nonatomic) NSString defaultText;
@property (nonatomic) UIColor defaultTextColor;
@property (nonatomic) UIColor scoreColor;
@property (nonatomic) Q starStyle;
- (id)getContentTextWithModel:appendText:;
- (id)getContentTextWithScoreModel:appendText:;
- (void)updateRatingLabelWithScoreModel:;
- (id)initWithFrame:;
- (id)defaultTextColor;
- (void)updateData:;
- (void).cxx_destruct;
- (id)defaultText;
- (void)setDefaultText:;
- (unsigned long long)starStyle;
- (void)setStarStyle:;
- (id)fullStarImage;
- (id)halfStarImage;
- (id)emptyStarImage;
- (void)setDefaultTextColor:;
- (void)setScoreColor:;
- (id)scoreColor;
@end
