@interface SAResultObjectReference : AceObject
@property (nonatomic) NSString className;
@property (nonatomic) NSString groupName;
@property (nonatomic) NSString referenceId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)className;
- (id)groupIdentifier;
- (void)setClassName:;
- (void)setGroupName:;
- (id)encodedClassName;
- (id)groupName;
- (id)referenceId;
- (void)setReferenceId:;
+ (id)resultObjectReference;
+ (id)resultObjectReferenceWithDictionary:context:;
@end
