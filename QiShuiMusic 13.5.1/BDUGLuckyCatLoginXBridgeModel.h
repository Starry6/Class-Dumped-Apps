@interface BDUGLuckyCatLoginXBridgeModel : BDXBridgeModel
@property (nonatomic) NSString platform;
@property (nonatomic) NSString titleType;
@property (nonatomic) NSString loginSource;
@property (nonatomic) NSDictionary extraData;
- (void)setLoginSource:;
- (id)loginSource;
- (id)titleType;
- (void)setPlatform:;
- (id)dictionaryValue;
- (id)platform;
- (void).cxx_destruct;
- (void)setTitleType:;
- (void)setExtraData:;
- (id)extraData;
+ (id)JSONKeyPathsByPropertyKey;
@end
