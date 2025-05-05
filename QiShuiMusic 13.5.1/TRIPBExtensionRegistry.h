@interface TRIPBExtensionRegistry : NSObject
- (id)init;
- (void)dealloc;
- (id)extensionForDescriptor:fieldNumber:;
- (void)addExtensions:;
- (void)addExtension:;
- (id)copyWithZone:;
@end
