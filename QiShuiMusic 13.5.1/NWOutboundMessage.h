@interface NWOutboundMessage : NWMessage
@property (nonatomic) double relativePriority;
@property (nonatomic) Q expirationMilliseconds;
- (void)setRelativePriority:;
- (double)relativePriority;
- (id)initWithContent:;
- (unsigned long long)expirationMilliseconds;
- (void)setExpirationMilliseconds:;
- (void)addAntecedent:;
@end
