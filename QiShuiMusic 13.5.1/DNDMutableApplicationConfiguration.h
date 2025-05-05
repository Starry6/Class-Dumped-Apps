@interface DNDMutableApplicationConfiguration : DNDApplicationConfiguration
@property (nonatomic) Q minimumBreakthroughUrgency;
@property (nonatomic) NSMutableSet allowedThreads;
@property (nonatomic) NSMutableSet deniedThreads;
- (void)setMinimumBreakthroughUrgency:;
- (void)setAllowedThreads:;
- (void)setDeniedThreads:;
@end
