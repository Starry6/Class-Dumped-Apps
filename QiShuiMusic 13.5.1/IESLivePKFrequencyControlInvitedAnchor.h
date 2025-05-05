@interface IESLivePKFrequencyControlInvitedAnchor : NSObject
@property (nonatomic) NSNumber firstRefusedTime;
@property (nonatomic) q refusedCount;
@property (nonatomic) NSNumber hitControlTime;
- (id)firstRefusedTime;
- (id)hitControlTime;
- (long long)refusedCount;
- (void)setFirstRefusedTime:;
- (void)setHitControlTime:;
- (void)setRefusedCount:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqualToObject:;
@end
