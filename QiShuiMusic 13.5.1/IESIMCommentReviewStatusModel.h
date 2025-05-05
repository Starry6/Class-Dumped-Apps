@interface IESIMCommentReviewStatusModel : IESIMBaseApiModel
@property (nonatomic) NSString reviewText;
@property (nonatomic) BOOL canAccelerateReview;
@property (nonatomic) NSString accelerateText;
@property (nonatomic) BOOL safeCountEnable;
@property (nonatomic) BOOL isCommentAccelerateOpen;
@property (nonatomic) BOOL isCommentAccelerating;
- (BOOL)safeCountEnable;
- (id)accelerateText;
- (BOOL)canAccelerateReview;
- (BOOL)isCommentAccelerateOpen;
- (BOOL)isCommentAccelerating;
- (void)setAccelerateText:;
- (void)setCanAccelerateReview:;
- (void)setIsCommentAccelerateOpen:;
- (void)setIsCommentAccelerating:;
- (void)setSafeCountEnable:;
- (void).cxx_destruct;
- (id)reviewText;
- (void)setReviewText:;
+ (id)JSONKeyPathsByPropertyKey;
@end
