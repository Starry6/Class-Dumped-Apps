@interface AWEAdPreloadAppAdParamModel : BDXBridgeModel
@property (nonatomic) NSString adID;
@property (nonatomic) NSString appID;
@property (nonatomic) NSString skan;
@property (nonatomic) NSString creativeID;
@property (nonatomic) NSString logExtra;
@property (nonatomic) NSNumber downloadScene;
@property (nonatomic) NSString webURL;
@property (nonatomic) NSString ppid;
- (void)setLogExtra:;
- (id)logExtra;
- (id)adID;
- (void)setAdID:;
- (void)setCreativeID:;
- (void)setDownloadScene:;
- (id)downloadScene;
- (id)skan;
- (void)setSkan:;
- (id)ppid;
- (void)setWebURL:;
- (void)setPpid:;
- (id)appID;
- (void)setAppID:;
- (void).cxx_destruct;
- (id)webURL;
- (id)creativeID;
+ (id)JSONTransformerForKey:;
+ (id)JSONKeyPathsByPropertyKey;
@end
