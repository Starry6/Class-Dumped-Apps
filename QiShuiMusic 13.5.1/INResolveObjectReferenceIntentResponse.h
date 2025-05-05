@interface INResolveObjectReferenceIntentResponse : INIntentResponse
@property (nonatomic) q code;
@property (nonatomic) NSData resolvedReferences;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)_dictionaryRepresentation;
- (id)initWithBackingStore:;
- (long long)code;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)propertiesByName;
- (id)_initWithCode:userActivity:;
- (id)initWithCode:userActivity:;
- (long long)_intentResponseCode;
- (long long)_codeWithName:;
- (void)setPropertiesByName:;
- (id)resolvedReferences;
- (void)setResolvedReferences:;
+ (BOOL)supportsSecureCoding;
+ (long long)_codeFromType:errorCode:appLaunchRequested:;
+ (int)_typeFromCode:;
+ (int)_errorCodeFromCode:;
+ (BOOL)_appLaunchRequestedFromCode:;
@end
