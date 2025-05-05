@interface CPLNetworkState : NSObject
@property (nonatomic) NSObject<OS_nw_path> networkPath;
@property (nonatomic) BOOL connected;
@property (nonatomic) BOOL constrained;
@property (nonatomic) BOOL cellular;
@property (nonatomic) BOOL cellularRestricted;
@property (nonatomic) BOOL inAirplaneMode;
@property (nonatomic) BOOL canUseNetwork;
@property (nonatomic) NSDictionary plistDescription;
- (BOOL)isInAirplaneMode;
- (BOOL)isConstrained;
- (id)initWithNetworkPath:cellularRestricted:inAirplaneMode:;
- (id)redactedDescription;
- (BOOL)canUseNetwork;
- (BOOL)isFunctionallyEqual:;
- (id)plistDescription;
- (id)networkPath;
- (BOOL)isCellular;
- (void).cxx_destruct;
- (BOOL)isConnected;
- (id)description;
- (BOOL)isCellularRestricted;
- (BOOL)isEqual:;
@end
