@interface SASettingGetRecordAudioRoute : SABaseClientBoundCommand
@property (nonatomic) NSString audioCategory;
- (void)setAudioCategory:;
- (id)groupIdentifier;
- (id)audioCategory;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)getRecordAudioRoute;
+ (id)getRecordAudioRouteWithDictionary:context:;
@end
