@interface WBSWebProcessPlugInPageController : NSObject
@property (nonatomic) WKWebProcessPlugInFrame mainFrame;
@property (nonatomic) WKWebProcessPlugInBrowserContextController browserContextController;
@property (nonatomic) WBSWebProcessPlugIn webProcessPlugIn;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)willDestroyBrowserContextController:;
- (void).cxx_destruct;
- (id)mainFrame;
- (id)initWithPlugIn:contextController:;
- (id)webProcessPlugIn;
- (id)browserContextController;
@end
