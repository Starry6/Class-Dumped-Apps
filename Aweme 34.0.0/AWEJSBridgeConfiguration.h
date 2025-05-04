@interface AWEJSBridgeConfiguration : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)aAWEJSBridgeFalconCommonAdapter;
+ (void)setupFalconPlatformDomain;
+ (id)falconDefaultURLPrefixes;
+ (Class)aAWEJSBridgeFalconCommonAdapterClass;
+ (void)_setupFalconPlatformDomain;
+ (void)setupFalcon;
@end
