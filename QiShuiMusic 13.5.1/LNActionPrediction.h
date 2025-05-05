@interface LNActionPrediction : NSObject
@property (nonatomic) NSArray parameterIdentifiers;
@property (nonatomic) LNDisplayRepresentation displayRepresentation;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)displayRepresentation;
- (id)parameterIdentifiers;
- (id)initWithParameterIdentifiers:displayRepresentation:;
+ (BOOL)supportsSecureCoding;
@end
