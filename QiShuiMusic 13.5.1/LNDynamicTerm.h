@interface LNDynamicTerm : NSObject
@property (nonatomic) NSString term;
@property (nonatomic) LNEntityIdentifier entityIdentifier;
- (unsigned long long)hash;
- (id)entityIdentifier;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)term;
- (id)initWithTerm:entityIdentifier:;
- (id)initWithTerm:entityIdentifierValue:entityTypeName:;
@end
