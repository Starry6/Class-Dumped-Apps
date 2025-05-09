@interface CKContextResponse : NSObject
@property (nonatomic) BOOL resultsNeedFiltering;
@property (nonatomic) Q mustPrefixMatchLength;
@property (nonatomic) NSDate hideCompletionsAfterDate;
@property (nonatomic) NSDate responseDate;
@property (nonatomic) CKContextRequest debugRequest;
@property (nonatomic) NSString uuid;
@property (nonatomic) NSError error;
@property (nonatomic) NSArray results;
@property (nonatomic) NSArray level1Topics;
@property (nonatomic) NSArray level2Topics;
@property (nonatomic) NSArray donorBundleIdentifiers;
@property (nonatomic) NSString languageTag;
@property (nonatomic) NSString debug;
@property (nonatomic) Q requestType;
@property (nonatomic) {CGSize=dd} availableLayoutSize;
@property (nonatomic) CKContextFingerprintMinHash requestFingerprint;
- (id)safari_topQIDsWithMaximumCount:;
- (unsigned long long)requestType;
- (id)responseDate;
- (void)setRequestType:;
- (id)languageTag;
- (void)setDonorBundleIdentifiers:;
- (void)setLanguageTag:;
- (id)completer;
- (id)donorBundleIdentifiers;
- (void)setDebug:;
- (void)setResponseDate:;
- (void)dealloc;
- (BOOL)isPlaceholder;
- (void)discardAndLogCompleter:likelyUnsolicited:;
- (id)toJSONSerializableDictionary;
- (id)debug;
- (void)setResultsNeedFiltering:;
- (id)hideCompletionsAfterDate;
- (id)uuid;
- (void)setDebugRequest:;
- (id)responseSummary:showHigherLevelTopics:maxPrefix:;
- (id)initPlaceholderWithUUID:requestType:;
- (void)setError:;
- (id)level1Topics;
- (id)resultByQuery:;
- (void)setLevel1Topics:;
- (void)setUuid:;
- (void)logTransactionSuccessfulForInputLength:completion:likelyUnsolicited:;
- (id)error;
- (id)initWithCoder:;
- (void)logEngagement:forInputLength:completion:likelyUnsolicited:;
- (id)availableLayoutSize;
- (unsigned long long)hash;
- (void)markResultsShown:serverOverride:forInputLength:results:;
- (void)setAvailableLayoutSize:;
- (void)setRequestFingerprint:;
- (id)debugRequest;
- (void)appendToDebug:;
- (void)encodeWithCoder:;
- (id)results;
- (void)setLevel2Topics:;
- (id)level2Topics;
- (void)discard;
- (void).cxx_destruct;
- (id)requestFingerprint;
- (id)initWithResults:requestType:;
- (id)initWithError:requestType:;
- (BOOL)resultsNeedFiltering;
- (void)setMustPrefixMatchLength:;
- (unsigned long long)mustPrefixMatchLength;
- (void)setHideCompletionsTimeLimit:;
- (void)addDebug:;
- (void)setHideCompletionsAfterDate:;
- (BOOL)isEqual:;
- (void)setResults:;
+ (BOOL)supportsSecureCoding;
+ (id)invalidProcessError;
+ (id)missingEntitlementError;
+ (id)malformedRequestError;
+ (id)timeoutError;
+ (id)serviceDisabledError;
+ (id)serviceBusyError;
@end
