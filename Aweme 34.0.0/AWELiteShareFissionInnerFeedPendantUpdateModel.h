@interface AWELiteShareFissionInnerFeedPendantUpdateModel : NSObject
@property (nonatomic) q awardAmount;
@property (nonatomic) q leftAmount;
@property (nonatomic) q totalAmount;
@property (nonatomic) BOOL isGuide;
@property (nonatomic) BOOL isComplete;
- (void)setIsGuide:;
- (BOOL)isGuide;
- (long long)awardAmount;
- (void)setAwardAmount:;
- (void)setLeftAmount:;
- (BOOL)isComplete;
- (void)setIsComplete:;
- (void)setTotalAmount:;
- (long long)totalAmount;
- (long long)leftAmount;
@end
