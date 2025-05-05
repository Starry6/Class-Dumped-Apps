@interface SASSetMultilingualDictationConfig : SABaseClientBoundCommand
@property (nonatomic) BOOL multilingualDisabled;
@property (nonatomic) NSNumber multilingualTimeoutInMillis;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (BOOL)multilingualDisabled;
- (void)setMultilingualDisabled:;
- (id)multilingualTimeoutInMillis;
- (void)setMultilingualTimeoutInMillis:;
+ (id)setMultilingualDictationConfig;
+ (id)setMultilingualDictationConfigWithDictionary:context:;
@end
