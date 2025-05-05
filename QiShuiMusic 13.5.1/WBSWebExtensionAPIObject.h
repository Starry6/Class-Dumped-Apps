@interface WBSWebExtensionAPIObject : NSObject
@property (nonatomic) WBSWebExtensionAPIRuntimeBase runtime;
- (void).cxx_destruct;
- (id)runtime;
- (void)initWithExtensionIdentifier:runtime:isForMainWorld:;
@end
