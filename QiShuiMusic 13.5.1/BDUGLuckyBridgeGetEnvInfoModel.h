@interface BDUGLuckyBridgeGetEnvInfoModel : BDXBridgeModel
@property (nonatomic) NSString ppe;
@property (nonatomic) double currentTimeValue;
@property (nonatomic) NSString did;
@property (nonatomic) NSString uid;
@property (nonatomic) NSString aid;
@property (nonatomic) NSString actToken;
@property (nonatomic) NSString channel;
@property (nonatomic) NSString geckoChannel;
- (void)setDid:;
- (void)setPpe:;
- (id)did;
- (id)ppe;
- (id)actToken;
- (double)currentTimeValue;
- (id)geckoChannel;
- (void)setActToken:;
- (void)setCurrentTimeValue:;
- (void)setGeckoChannel:;
- (void)setChannel:;
- (id)channel;
- (id)uid;
- (void)setUid:;
- (void).cxx_destruct;
- (void)setAid:;
- (id)aid;
+ (id)JSONKeyPathsByPropertyKey;
@end
