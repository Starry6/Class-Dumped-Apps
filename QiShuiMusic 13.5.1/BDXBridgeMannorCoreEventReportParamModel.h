@interface BDXBridgeMannorCoreEventReportParamModel : BDXBridgeModel
@property (nonatomic) NSString action;
@property (nonatomic) NSString tag;
@property (nonatomic) NSDictionary extra;
@property (nonatomic) NSDictionary adExtraData;
@property (nonatomic) q watchedDuration;
- (long long)watchedDuration;
- (void)setAdExtraData:;
- (id)adExtraData;
- (void)setExtra:;
- (void)setWatchedDuration:;
- (id)tag;
- (id)extra;
- (id)action;
- (void)setAction:;
- (void)setTag:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
