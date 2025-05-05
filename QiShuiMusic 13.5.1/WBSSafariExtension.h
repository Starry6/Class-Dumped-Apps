@interface WBSSafariExtension : NSObject
@property (nonatomic) NSURL safariExtensionBaseURI;
@property (nonatomic) NSUUID baseURIHost;
@property (nonatomic) NSString displayName;
@property (nonatomic) {RetainPtr<const __SecCode *>=^v} bundleCodeRef;
@property (nonatomic) NSArray injectedScripts;
@property (nonatomic) NSArray injectedStyleSheets;
@property (nonatomic) WKWebsiteDataStore defaultWebsiteDataStore;
- (id)initWithExtension:;
- (id)displayName;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)defaultWebsiteDataStore;
- (id)safariExtensionBaseURI;
- (void)setSafariExtensionBaseURI:;
- (id)baseURIHost;
- (id)bundleCodeRef;
- (void)setBundleCodeRef:;
- (id)injectedScripts;
- (void)setInjectedScripts:;
- (id)injectedStyleSheets;
- (void)setInjectedStyleSheets:;
@end
