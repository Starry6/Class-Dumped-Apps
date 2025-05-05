@interface SASettingAudioRoute : AceObject
@property (nonatomic) NSString audioRouteType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)audioRouteType;
- (void)setAudioRouteType:;
+ (id)audioRoute;
+ (id)audioRouteWithDictionary:context:;
@end
