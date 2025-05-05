@interface WBSBundleWebExtensionBrowsingContext : NSObject
@property (nonatomic) WKBrowsingContextHandle browsingContextHandle;
@property (nonatomic) NSNumber tabID;
@property (nonatomic) NSNumber windowID;
- (void).cxx_destruct;
- (id)windowID;
- (id)initWithBrowingContextHandle:tabID:windowID:;
- (id)browsingContextHandle;
- (id)tabID;
@end
