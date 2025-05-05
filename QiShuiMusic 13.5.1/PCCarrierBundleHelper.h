@interface PCCarrierBundleHelper : NSObject
@property (nonatomic) NSDictionary cachedPushSettings;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)operatorBundleChange:;
- (void)currentDataSimChanged:;
- (void)addDelegate:;
- (id)init;
- (void)_processCarrierBundleChange:;
- (void)removeDelegate:;
- (id)cachedPushSettings;
- (id)copyValueForKey:error:;
- (void)_updateCurrentDataSimContext:;
- (BOOL)boolValueFromPushBundleForKey:error:;
- (void).cxx_destruct;
- (id)copyValueFromPushBundleForKey:error:;
- (void)setCachedPushSettings:;
+ (id)helper;
@end
