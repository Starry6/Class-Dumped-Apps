@interface AWECommentEvaluationRatingElementConfig : NSObject
@property (nonatomic) NSString ratingTitle;
@property (nonatomic) BOOL ratingDisableHalfPoint;
@property (nonatomic) BOOL ratingDisablePan;
@property (nonatomic) BOOL ratingOnly;
@property (nonatomic) NSArray ratingPointDes;
- (BOOL)ratingOnly;
- (BOOL)ratingDisableHalfPoint;
- (BOOL)ratingDisablePan;
- (id)ratingTitle;
- (id)ratingPointDes;
- (void)setRatingTitle:;
- (void)setRatingDisableHalfPoint:;
- (void)setRatingDisablePan:;
- (void)setRatingOnly:;
- (void)setRatingPointDes:;
- (void).cxx_destruct;
@end
