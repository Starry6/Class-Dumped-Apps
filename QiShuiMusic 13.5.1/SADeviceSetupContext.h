@interface SADeviceSetupContext : SADomainObject
@property (nonatomic) NSString setupSceneId;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)setupSceneId;
- (void)setSetupSceneId:;
+ (id)setupContext;
+ (id)setupContextWithDictionary:context:;
@end
