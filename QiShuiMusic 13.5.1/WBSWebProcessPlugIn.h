@interface WBSWebProcessPlugIn : NSObject
@property (nonatomic) WKWebProcessPlugInController plugInController;
@property (nonatomic) NSArray searchEnginesForRedirectToSafeSearch;
@property (nonatomic) WBSSearchProvider defaultSearchProvider;
@property (nonatomic) BOOL parsecABTestingEnabled;
@property (nonatomic) Q parsecABGroupIdentifier;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)pageControllerWithBrowserContextController:;
- (void).cxx_destruct;
- (id)plugInController;
- (void)webProcessPlugIn:didCreateBrowserContextController:;
- (void)webProcessPlugIn:willDestroyBrowserContextController:;
- (void)webProcessPlugIn:initializeWithObject:;
- (id)searchEnginesForRedirectToSafeSearch;
- (unsigned long long)parsecABGroupIdentifier;
- (BOOL)isParsecABTestingEnabled;
- (id)defaultSearchProvider;
- (void)didCreatePageController:forBrowserContextController:;
- (void)willDestroyPageController:forBrowserContextController:;
@end
