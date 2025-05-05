@interface BDMannorAdTaskContext : NSObject
@property (nonatomic) NSString clickType;
@property (nonatomic) NSString tag;
@property (nonatomic) NSString refer;
@property (nonatomic) NSString logExtra;
@property (nonatomic) NSDictionary adExtraData;
@property (nonatomic) NSDictionary extra;
@property (nonatomic) NSArray customizedClickPriority;
@property (nonatomic) BDMannorAdDataModel adData;
- (void)setAdExtraData:;
- (id)adExtraData;
- (id)clickType;
- (id)customizedClickPriority;
- (id)logExtra;
- (id)refer;
- (void)setClickType:;
- (void)setCustomizedClickPriority:;
- (void)setExtra:;
- (void)setLogExtra:;
- (void)setRefer:;
- (id)tag;
- (id)extra;
- (void)setAdData:;
- (void)setTag:;
- (void).cxx_destruct;
- (id)adData;
@end
