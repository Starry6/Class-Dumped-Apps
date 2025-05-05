@interface SARelatedName : AceObject
@property (nonatomic) NSString label;
@property (nonatomic) NSString name;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setName:;
- (id)groupIdentifier;
- (void)setLabel:;
- (id)label;
- (id)encodedClassName;
- (id)name;
+ (id)relatedName;
+ (id)relatedNameWithDictionary:context:;
@end
