@interface ENGroupID : NSObject
@property (nonatomic) ENStableGroupID stableGroupID;
@property (nonatomic) NSInteger generation;
@property (nonatomic) NSData dataRepresentation;
- (id)initWithDataRepresentation:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (int)generation;
- (BOOL)isEqual:;
- (id)dataRepresentation;
- (id)copyWithZone:;
- (id)stableGroupID;
- (id)initWithStableGroupID:generation:;
- (BOOL)compare:withResult:error:;
+ (BOOL)supportsSecureCoding;
@end
