@interface FMDExtVendorContext : FMDExtensionContext
@property (nonatomic) <FMDExtAccessoryProtocol> accessoryProvider;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)respondsToSelector:;
- (id)init;
- (id)methodSignatureForSelector:;
- (void).cxx_destruct;
- (void)forwardInvocation:;
- (void)connectionStatusForAccessory:withCompletion:;
- (void)getStyleForAccessory:info:withCompletion:;
- (void)safetyAlertForAccessory:info:withCompletion:;
- (void)fetchAllAccessoriesInfo:withCompletion:;
- (id)accessoryProvider;
- (void)setAccessoryProvider:;
@end
