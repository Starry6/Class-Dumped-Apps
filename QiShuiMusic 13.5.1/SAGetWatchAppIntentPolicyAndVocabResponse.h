@interface SAGetWatchAppIntentPolicyAndVocabResponse : SABaseCommand
@property (nonatomic) NSDictionary aceAppBundleInfos;
@property (nonatomic) NSString aceId;
@property (nonatomic) NSString refId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)aceAppBundleInfos;
- (void)setAceAppBundleInfos:;
+ (id)getWatchAppIntentPolicyAndVocabResponse;
+ (id)getWatchAppIntentPolicyAndVocabResponseWithDictionary:context:;
@end
