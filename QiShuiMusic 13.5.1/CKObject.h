@interface CKObject : NSObject
@property (nonatomic) CKObjCClass objcClass;
@property (nonatomic) NSSet propertyNamesNotToEncode;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)dictionaryPropertyEncoding;
- (unsigned long long)hash;
- (id)initWithPropertyDictionary:;
- (id)description;
- (BOOL)isEqual:;
- (id)objcClass;
- (id)propertyNamesNotToEncode;
@end
