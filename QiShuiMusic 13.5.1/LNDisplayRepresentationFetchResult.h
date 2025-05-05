@interface LNDisplayRepresentationFetchResult : NSObject
@property (nonatomic) LNAction action;
@property (nonatomic) LNDisplayRepresentation displayRepresentation;
@property (nonatomic) NSError error;
- (id)action;
- (id)error;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)displayRepresentation;
- (id)initWithAction:displayRepresentation:error:;
+ (BOOL)supportsSecureCoding;
@end
