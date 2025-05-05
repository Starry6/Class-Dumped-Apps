@interface IESLiveSaaSPotionMessage : NSObject
@property (nonatomic) Q sentCount;
@property (nonatomic) Q requiredCount;
- (unsigned long long)requiredCount;
- (unsigned long long)sentCount;
- (void)setRequiredCount:;
- (void)setSentCount:;
@end
