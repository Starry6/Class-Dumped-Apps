@interface IESECStoreModernReputationView : UIView
@property (nonatomic) IESECStoreModernRatingLabel ratingLabel;
@property (nonatomic) UIView greaterLineView;
@property (nonatomic) UILabel greaterLabel;
@property (nonatomic) UIView saleCountLineView;
@property (nonatomic) UILabel saleCountLabel;
- (id)greaterLineView;
- (id)greaterLabel;
- (id)saleCountLabel;
- (id)saleCountLineView;
- (void)setGreaterLabel:;
- (void)setGreaterLineView:;
- (void)setSaleCountLabel:;
- (void)setSaleCountLineView:;
- (void)updateDataWithModel:;
- (void)updateDataWithScoreModel:;
- (void)updateRatingLabelWithScore:greaterText:;
- (id)ratingLabel;
- (id)initWithFrame:;
- (void)setTextColor:;
- (void).cxx_destruct;
- (void)setupSubviews;
- (void)setRatingLabel:;
@end
