@interface WBSExtensionsAnalyticsEventCoalescer : NSObject
@property (nonatomic) double resetInterval;
@property (nonatomic) <WBSExtensionsAnalyticsEventCoalescerDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)setResetInterval:;
- (void)setDelegate:;
- (double)resetInterval;
- (id)delegate;
- (void).cxx_destruct;
- (BOOL)didInvokeToolbarButtonForExtensionWithIdentifier:;
- (void)extensionAnalyticsEventCoalescer:didInjectScriptForExtensionWithIdentifier:;
- (void)extensionAnalyticsEventCoalescer:didInvokeToolbarButtonForExtensionWithIdentifier:;
- (BOOL)didInjectScriptForExtensionWithIdentifier:;
- (void)_configureResetTimer;
@end
