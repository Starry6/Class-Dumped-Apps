@interface LNValue : NSObject
@property (nonatomic) NSString cat_parameterName;
@property (nonatomic) NSString cat_definitionXML;
@property (nonatomic) NSString cat_variableXML;
@property (nonatomic) LNDisplayRepresentation displayRepresentation;
@property (nonatomic) LNValueType valueType;
@property (nonatomic) @ value;
- (id)cat_parameterName;
- (id)cat_definitionXML;
- (id)cat_variableXML;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (long long)compare:;
- (void).cxx_destruct;
- (id)description;
- (id)value;
- (id)valueType;
- (BOOL)isEqual:;
- (id)displayRepresentation;
- (id)initWithValue:valueType:displayRepresentation:;
- (id)initWithValues:memberValueType:;
- (void)setDisplayRepresentation:;
- (id)initWithValue:valueType:;
+ (BOOL)supportsSecureCoding;
@end
