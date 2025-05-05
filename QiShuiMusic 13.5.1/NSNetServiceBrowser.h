@interface NSNetServiceBrowser : NSObject
@property (nonatomic) <NSNetServiceBrowserDelegate> delegate;
@property (nonatomic) BOOL includesPeerToPeer;
- (id)init;
- (void)dealloc;
- (void)removeFromRunLoop:forMode:;
- (void)setDelegate:;
- (void)stop;
- (void)scheduleInRunLoop:forMode:;
- (id)delegate;
- (BOOL)includesPeerToPeer;
- (void)setIncludesPeerToPeer:;
- (void)_setIncludesAWDL:;
- (void)searchForBrowsableDomains;
- (void)searchForRegistrationDomains;
- (void)searchForServicesOfType:inDomain:;
- (id)_internalNetServiceBrowser;
- (void)_dispatchCallBack:flags:error:;
- (void)searchForAllDomains;
@end
