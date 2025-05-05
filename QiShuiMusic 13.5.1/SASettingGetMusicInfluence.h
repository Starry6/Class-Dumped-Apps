@interface SASettingGetMusicInfluence : SASettingGetBool
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)getMusicInfluence;
+ (id)getMusicInfluenceWithDictionary:context:;
@end
