@interface AMSODISession : NSObject
@property (nonatomic) <AMSBagProtocol> bag;
@property (nonatomic) NSLock lock;
@property (nonatomic) Q accountType;
@property (nonatomic) NSString bundleIdentifier;
@property (nonatomic) NSString cacheIdentifier;
@property (nonatomic) NSString sessionIdentifier;
- (unsigned long long)accountType;
- (id)bundleIdentifier;
- (id)sessionIdentifier;
- (id)cacheIdentifier;
- (id)lock;
- (void)setBag:;
- (void).cxx_destruct;
- (id)bag;
- (void)setCacheIdentifier:;
- (void)setLock:;
- (id)initWithSessionIdentifier:accountType:bag:;
- (id)initWithSessionIdentifier:accountType:bundleIdentifier:bag:;
- (id)getAssessment;
- (BOOL)updateWithAttributes:;
- (id)_createODISession;
+ (BOOL)provideFeedbackOnPayloadOutcome:cacheIdentifier:bag:;
+ (BOOL)shouldUseODIWithBag:;
@end
