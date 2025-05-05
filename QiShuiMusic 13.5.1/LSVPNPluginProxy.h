@interface LSVPNPluginProxy : LSBundleProxy
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)_initWithBundleIdentifier:withContext:;
+ (BOOL)supportsSecureCoding;
+ (id)VPNPluginProxyForIdentifier:;
+ (id)VPNPluginProxyForIdentifier:withContext:;
@end
