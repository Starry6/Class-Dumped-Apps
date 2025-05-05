@interface NEIKEv2Identifier : NSObject
@property (nonatomic) NSData identifierData;
@property (nonatomic) NSString stringValue;
@property (nonatomic) Q identifierType;
- (id)descriptionWithIndent:options:;
- (void)setIdentifierData:;
- (unsigned long long)hash;
- (id)stringValue;
- (void).cxx_destruct;
- (unsigned long long)identifierType;
- (id)description;
- (id)identifierData;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)copyShortDescription;
+ (id)copyTypeDescription;
+ (id)createIdentifierWithType:data:zone:;
+ (id)createIdentifierWithType:data:;
@end
