@interface SASettingSetMusicInfluence : SASettingSetBool
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)setMusicInfluence;
+ (id)setMusicInfluenceWithDictionary:context:;
@end
