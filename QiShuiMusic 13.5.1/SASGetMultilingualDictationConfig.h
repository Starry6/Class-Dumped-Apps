@interface SASGetMultilingualDictationConfig : SABaseCommand
@property (nonatomic) BOOL multilingualDisabled;
@property (nonatomic) NSNumber multilingualTimeoutInMillis;
@property (nonatomic) NSString aceId;
@property (nonatomic) NSString refId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (BOOL)multilingualDisabled;
- (void)setMultilingualDisabled:;
- (id)multilingualTimeoutInMillis;
- (void)setMultilingualTimeoutInMillis:;
+ (id)getMultilingualDictationConfig;
+ (id)getMultilingualDictationConfigWithDictionary:context:;
@end
