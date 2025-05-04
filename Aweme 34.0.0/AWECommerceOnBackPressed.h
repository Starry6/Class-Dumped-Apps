@interface AWECommerceOnBackPressed : NSObject
@property (nonatomic) BDXViewController bdxViewController;
@property (nonatomic) BOOL enableIntercept;
@property (nonatomic) LynxView rootView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)bdxViewController;
- (void)setBdxViewController:;
- (void)disableSwipe:container:;
- (id)shouldBlockBackGesture:;
- (void)startIntercept:withLynxView:withViewController:;
- (void)setEnableIntercept:;
- (BOOL)enableIntercept;
- (void).cxx_destruct;
- (id)rootView;
- (void)setRootView:;
+ (id)sharedInstance;
@end
