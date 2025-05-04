@interface AWECommentReviewStatusModel : AWEBaseApiModel
@property (nonatomic) NSString reviewText;
@property (nonatomic) BOOL canAccelerateReview;
@property (nonatomic) NSString accelerateText;
@property (nonatomic) BOOL safeCountEnable;
@property (nonatomic) BOOL isCommentAccelerateOpen;
@property (nonatomic) BOOL isCommentAccelerating;
- (id)accelerateText;
- (BOOL)canAccelerateReview;
- (void)setCanAccelerateReview:;
- (void)setAccelerateText:;
- (BOOL)safeCountEnable;
- (void)setSafeCountEnable:;
- (BOOL)isCommentAccelerateOpen;
- (void)setIsCommentAccelerateOpen:;
- (BOOL)isCommentAccelerating;
- (void)setIsCommentAccelerating:;
- (void).cxx_destruct;
- (id)reviewText;
- (void)setReviewText:;
+ (id)JSONKeyPathsByPropertyKey;
@end
