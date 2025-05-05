@interface VCPMADResource : NSObject
@property (nonatomic) q activeCost;
@property (nonatomic) q inactiveCost;
- (void)purge;
- (id)description;
- (long long)activeCost;
- (long long)inactiveCost;
@end
