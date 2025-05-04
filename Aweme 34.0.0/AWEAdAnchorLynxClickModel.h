@interface AWEAdAnchorLynxClickModel : BDXBridgeModel
@property (nonatomic) NSString tag;
@property (nonatomic) NSString refer;
@property (nonatomic) NSDictionary adExtraData;
- (id)adExtraData;
- (void)setAdExtraData:;
- (void)setRefer:;
- (id)refer;
- (id)tag;
- (void)setTag:;
- (void).cxx_destruct;
+ (BOOL)automaticallyDefaultMapping;
@end
