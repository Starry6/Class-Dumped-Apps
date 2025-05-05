@interface DATrustHandler : NSObject
@property (nonatomic) <DATrustHandlerDelegate> delegate;
@property (nonatomic) NSMutableDictionary haveWarnedAboutCertDict;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (id)initWithDelegate:;
- (BOOL)resetCertWarnings;
- (BOOL)haveWarnedAboutCert:forHost:;
- (void)setHaveWarnedAboutCert:forHost:;
- (int)_actionForTrust:host:service:;
- (id)_serverSuffixesToAlwaysFail;
- (void)handleTrust:forHost:forAccount:withCompletionBlock:;
- (BOOL)handleTrustChallenge:forAccount:;
- (BOOL)handleTrustChallenge:forAccount:completionHandler:;
- (id)haveWarnedAboutCertDict;
- (void)setHaveWarnedAboutCertDict:;
@end
