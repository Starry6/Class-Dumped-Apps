@interface SAHASceneAction : SADomainObject
@property (nonatomic) SAHAAction action;
@property (nonatomic) NSURL entityId;
- (id)groupIdentifier;
- (id)action;
- (void)setAction:;
- (id)encodedClassName;
- (void)setEntityId:;
- (id)entityId;
+ (id)sceneAction;
+ (id)sceneActionWithDictionary:context:;
@end
