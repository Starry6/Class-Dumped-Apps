@interface WKAccessibilityWebPageObject : WKAccessibilityWebPageObjectBase
@property (nonatomic) NSData remoteTokenData;
- (id)init;
- (void)dealloc;
- (void)_accessibilityCategoryInstalled:;
- (void)setRemoteTokenData:;
- (id)accessibilityHitTest:;
- (id)remoteTokenData;
- (double)pageScale;
@end
