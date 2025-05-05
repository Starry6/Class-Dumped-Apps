@interface BDXBridgeRequestCheckConfig : NSObject
@property (nonatomic) NSMutableDictionary cachedUnits;
@property (nonatomic) BOOL toggle;
- (void)setCachedUnits:;
- (id)cachedUnits;
- (BOOL)matchRule:withValue:error:;
- (id)requestCheckForMethod:withParameters:;
- (id)unitForMethod:;
- (id)init;
- (void).cxx_destruct;
- (void)setToggle:;
- (BOOL)isToggleOn;
@end
