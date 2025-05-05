@interface UIProxyObject : NSObject
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)setProxiedObjectIdentifier:;
- (id)proxiedObjectIdentifier;
+ (id)proxyDecodingMap;
+ (void)addMappingFromIdentifier:toObject:forCoder:;
+ (void)addMappings:forCoder:;
+ (id)mappedObjectForCoder:withIdentifier:;
+ (void)removeMappingsForCoder:;
@end
