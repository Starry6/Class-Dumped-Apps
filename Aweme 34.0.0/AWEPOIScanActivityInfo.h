@interface AWEPOIScanActivityInfo : NSObject
@property (nonatomic) AWEPOICouponActivityModel couponActivity;
@property (nonatomic) AWEChallengeModel challenge;
@property (nonatomic) NSString stickerId;
- (id)stickerId;
- (void)setStickerId:;
- (id)couponActivity;
- (BOOL)hasValidActivity;
- (void)setCouponActivity:;
- (id)challenge;
- (void)setChallenge:;
- (void).cxx_destruct;
@end
