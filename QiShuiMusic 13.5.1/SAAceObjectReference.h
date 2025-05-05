@interface SAAceObjectReference : AceObject
@property (nonatomic) NSString referenceIdentifier;
@property (nonatomic) NSString referenceType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)referenceIdentifier;
- (void)setReferenceIdentifier:;
- (id)referenceType;
- (void)setReferenceType:;
+ (id)aceObjectReference;
+ (id)aceObjectReferenceWithDictionary:context:;
@end
