@interface NSHTTPCookie2StorageFilter : NSObject
@property (nonatomic) NSURL url;
@property (nonatomic) NSURL mainDocumentURL;
@property (nonatomic) NSURL siteForCookies;
@property (nonatomic) NSString partition;
@property (nonatomic) BOOL isTopLevelNavigation;
@property (nonatomic) BOOL isSafe;
@property (nonatomic) BOOL overwriteHTTPOnlyCookies;
@property (nonatomic) Q acceptPolicy;
- (id)url;
- (void)setPartition:;
- (id)init;
- (id)partition;
- (void)setUrl:;
- (BOOL)isTrusted;
- (id)mainDocumentURL;
- (void).cxx_destruct;
- (void)setMainDocumentURL:;
- (id)siteForCookies;
- (void)setSiteForCookies:;
- (BOOL)isTopLevelNavigation;
- (void)setIsTopLevelNavigation:;
- (BOOL)isSafe;
- (void)setIsSafe:;
- (unsigned long long)acceptPolicy;
- (void)setAcceptPolicy:;
- (BOOL)overwriteHTTPOnlyCookies;
- (void)setOverwriteHTTPOnlyCookies:;
@end
