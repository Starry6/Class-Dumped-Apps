@interface INRunVoiceCommandIntentResponse : INIntentResponse
@property (nonatomic) q code;
@property (nonatomic) NSString appBundleId;
@property (nonatomic) q intentCategory;
@property (nonatomic) NSNumber customResponsesDisabled;
@property (nonatomic) NSString responseTemplate;
@property (nonatomic) NSDictionary parameters;
@property (nonatomic) NSString verb;
@property (nonatomic) INArchivedObject underlyingIntent;
@property (nonatomic) NSString localizedAppName;
@property (nonatomic) INArchivedObject underlyingIntentResponse;
@property (nonatomic) q toggleState;
@property (nonatomic) NSNumber continueRunning;
@property (nonatomic) NSNumber interstitialDisabled;
@property (nonatomic) NSString underlyingIntentTitle;
@property (nonatomic) NSArray steps;
@property (nonatomic) NSNumber prefersExecutionOnCompanion;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)steps;
- (id)init;
- (void)setAppBundleId:;
- (long long)toggleState;
- (id)_dictionaryRepresentation;
- (id)initWithBackingStore:;
- (id)appBundleId;
- (long long)code;
- (id)initWithCoder:;
- (void)setIntentCategory:;
- (id)parameters;
- (void)encodeWithCoder:;
- (long long)intentCategory;
- (void)setToggleState:;
- (id)localizedAppName;
- (void)setParameters:;
- (void)setSteps:;
- (id)propertiesByName;
- (id)_initWithCode:userActivity:;
- (id)initWithCode:userActivity:;
- (long long)_intentResponseCode;
- (long long)_codeWithName:;
- (void)setPropertiesByName:;
- (id)verb;
- (void)setVerb:;
- (id)customResponsesDisabled;
- (void)setCustomResponsesDisabled:;
- (id)responseTemplate;
- (void)setResponseTemplate:;
- (id)underlyingIntent;
- (void)setUnderlyingIntent:;
- (void)setLocalizedAppName:;
- (id)underlyingIntentResponse;
- (void)setUnderlyingIntentResponse:;
- (id)continueRunning;
- (void)setContinueRunning:;
- (id)interstitialDisabled;
- (void)setInterstitialDisabled:;
- (id)underlyingIntentTitle;
- (void)setUnderlyingIntentTitle:;
- (id)prefersExecutionOnCompanion;
- (void)setPrefersExecutionOnCompanion:;
+ (BOOL)supportsSecureCoding;
+ (long long)_codeFromType:errorCode:appLaunchRequested:;
+ (int)_typeFromCode:;
+ (int)_errorCodeFromCode:;
+ (BOOL)_appLaunchRequestedFromCode:;
@end
