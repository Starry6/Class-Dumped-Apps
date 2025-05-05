@interface NELaunchServices : NSObject
+ (id)lookupIdentifier:plugins:;
+ (id)pluginProxyWithIdentifier:type:pluginClass:extensionPoint:;
+ (id)pluginClassToExtensionPoint:;
+ (id)bundleProxyForIdentifier:uid:plugins:;
@end
