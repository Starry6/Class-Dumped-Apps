@interface BDXBridgeInspireConnectWithLiveMethodParamModel : BDXBridgeModel
@property (nonatomic) NSString roomID;
@property (nonatomic) NSString scene;
@property (nonatomic) NSDictionary params;
- (void)setScene:;
- (id)scene;
- (void).cxx_destruct;
- (id)params;
- (id)roomID;
- (void)setRoomID:;
- (void)setParams:;
+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;
@end
