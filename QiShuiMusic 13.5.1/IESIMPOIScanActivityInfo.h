@interface IESIMPOIScanActivityInfo : NSObject
@property (nonatomic) IESIMPOICouponActivityModel couponActivity;
@property (nonatomic) IESIMChallengeModel challenge;
@property (nonatomic) NSString stickerId;
- (id)couponActivity;
- (BOOL)hasValidActivity;
- (void)setCouponActivity:;
- (void)setStickerId:;
- (id)stickerId;
- (void)setChallenge:;
- (void).cxx_destruct;
- (id)challenge;
@end
