@interface BDUGLuckyCatSendALogXBridgeModel : BDXBridgeModel
@property (nonatomic) NSString tag;
@property (nonatomic) NSString level;
@property (nonatomic) NSString message;
- (void)setLevel:;
- (id)tag;
- (void)setMessage:;
- (id)level;
- (void)setTag:;
- (id)message;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
