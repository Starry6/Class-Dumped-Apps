@interface AWENewScanImpl.ScanSceneInfo : MTLModel
@property (nonatomic) q qrType;
@property (nonatomic) NSArray forceVerifyList;
@property (nonatomic) NSArray skipVerifyList;
@property (nonatomic) NSArray keyWordList;
- (long long)qrType;
- (void)setQrType:;
- (id)forceVerifyList;
- (void)setForceVerifyList:;
- (id)skipVerifyList;
- (void)setSkipVerifyList:;
- (id)keyWordList;
- (void)setKeyWordList:;
- (id)initWithDictionary:error:;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:;
+ (id)JSONKeyPathsByPropertyKey;
@end
