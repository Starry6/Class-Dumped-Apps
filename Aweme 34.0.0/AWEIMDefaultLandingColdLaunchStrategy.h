@interface AWEIMDefaultLandingColdLaunchStrategy : NSObject
@property (nonatomic) NSInteger hasColdLaunchCount;
@property (nonatomic) NSInteger enableColdLaunchIndex;
@property (nonatomic) NSDate hasColdLaunchDate;
- (int)hasColdLaunchCount;
- (int)enableColdLaunchIndex;
- (id)hasColdLaunchDate;
- (void)setHasColdLaunchCount:;
- (void)setEnableColdLaunchIndex:;
- (void)setHasColdLaunchDate:;
- (void)encodeWithCoder:;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:;
@end
