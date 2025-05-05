@interface TUNeighborhoodHandoffContext : NSObject
@property (nonatomic) q type;
@property (nonatomic) q pullContext;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (long long)type;
- (id)description;
- (long long)pullContext;
- (id)initWithHandoffType:;
- (id)initWithPullContext:;
+ (BOOL)supportsSecureCoding;
@end
