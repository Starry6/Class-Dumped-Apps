@interface SKStarRatingAlertController : UIAlertController
@property (nonatomic) float rating;
@property (nonatomic) @? completion;
- (id)completion;
- (void)setCompletion:;
- (void)dealloc;
- (float)rating;
- (void).cxx_destruct;
- (id)initWithNibName:bundle:;
- (void)setRating:;
- (void)_ratingControlChanged:;
- (void)setupActionsWithBundle:;
- (void)_updateButtonState;
+ (id)starRatingAlertController;
@end
