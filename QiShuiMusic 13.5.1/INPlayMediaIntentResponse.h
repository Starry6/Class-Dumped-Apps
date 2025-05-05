@interface INPlayMediaIntentResponse : INIntentResponse
@property (nonatomic) q code;
@property (nonatomic) NSDictionary nowPlayingInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setNowPlayingInfo:;
- (id)init;
- (id)_dictionaryRepresentation;
- (id)initWithBackingStore:;
- (long long)code;
- (id)initWithCoder:;
- (id)nowPlayingInfo;
- (void)encodeWithCoder:;
- (id)propertiesByName;
- (id)_initWithCode:userActivity:;
- (id)initWithCode:userActivity:;
- (long long)_intentResponseCode;
- (long long)_codeWithName:;
- (void)setPropertiesByName:;
- (BOOL)_shouldForwardIntentToApp;
- (void)_intents_prepareResponse;
+ (BOOL)supportsSecureCoding;
+ (long long)_codeFromType:errorCode:appLaunchRequested:;
+ (int)_typeFromCode:;
+ (int)_errorCodeFromCode:;
+ (BOOL)_appLaunchRequestedFromCode:;
@end
