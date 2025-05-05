@interface SASettingGetPlaybackAudioRoute : SABaseClientBoundCommand
@property (nonatomic) NSString audioCategory;
- (void)setAudioCategory:;
- (id)groupIdentifier;
- (id)audioCategory;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)getPlaybackAudioRoute;
+ (id)getPlaybackAudioRouteWithDictionary:context:;
@end
