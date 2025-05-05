@interface SBSUserNotificationAssetDefinition : NSObject
- (id)_initWithDictionary:;
- (id)build;
- (id)copyWithZone:;
+ (id)_definitionType;
+ (id)_definitionFromSerializedDefinition:;
@end
