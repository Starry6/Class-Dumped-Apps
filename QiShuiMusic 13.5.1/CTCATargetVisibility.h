@interface CTCATargetVisibility : NSObject
@property (nonatomic) q aggregateVisibility;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)description;
- (id)copyWithZone:;
- (long long)aggregateVisibility;
- (void)setAggregateVisibility:;
+ (BOOL)supportsSecureCoding;
@end
