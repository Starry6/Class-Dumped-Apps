@interface AWELiteShareFissionInnerFeedShareElementStatusModel : NSObject
@property (nonatomic) BOOL shouldShowShareAmount;
@property (nonatomic) q amount;
@property (nonatomic) q taskStatus;
@property (nonatomic) q statusCode;
@property (nonatomic) NSString rewardText;
- (void)setTaskStatus:;
- (void)setRewardText:;
- (id)rewardText;
- (BOOL)shouldShowShareAmount;
- (void)setShouldShowShareAmount:;
- (long long)statusCode;
- (void).cxx_destruct;
- (void)setStatusCode:;
- (long long)amount;
- (void)setAmount:;
- (long long)taskStatus;
@end
