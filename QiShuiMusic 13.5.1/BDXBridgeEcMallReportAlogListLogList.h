@interface BDXBridgeEcMallReportAlogListLogList : BDXBridgeModel
@property (nonatomic) NSString tag;
@property (nonatomic) NSString message;
@property (nonatomic) q level;
- (void)setLevel:;
- (id)tag;
- (void)setMessage:;
- (long long)level;
- (void)setTag:;
- (id)message;
- (void).cxx_destruct;
+ (id)levelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
