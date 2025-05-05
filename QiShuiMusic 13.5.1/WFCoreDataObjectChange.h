@interface WFCoreDataObjectChange : NSObject
@property (nonatomic) NSString URIRepresentation;
@property (nonatomic) Q objectType;
@property (nonatomic) NSString identifier;
- (id)URIRepresentation;
- (unsigned long long)objectType;
- (id)identifier;
- (unsigned long long)hash;
- (id)initWithDictionaryRepresentation:;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)initWithObjectID:objectType:identifier:;
@end
