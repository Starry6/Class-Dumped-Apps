@interface SAGKPropertyPod : SAGKPodView
@property (nonatomic) NSArray propertyList;
- (id)propertyList;
- (id)groupIdentifier;
- (id)encodedClassName;
- (void)setPropertyList:;
+ (id)propertyPod;
+ (id)propertyPodWithDictionary:context:;
@end
