@interface SASettingGetAudioRouteResponse : SASettingResponse
@property (nonatomic) SASettingAudioRoute audioRoute;
- (id)groupIdentifier;
- (void)setAudioRoute:;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)audioRoute;
+ (id)getAudioRouteResponse;
+ (id)getAudioRouteResponseWithDictionary:context:;
@end
