@interface AWEPaySwiftImpl.CCMEntryPageRegInfo : MTLModel
@property (nonatomic) NSString jumpTripUrl;
@property (nonatomic) q num;
@property (nonatomic) NSArray regTrafficInfos;
@property (nonatomic) NSString regGuideText;
- (id)regGuideText;
- (void)setRegGuideText:;
- (id)jumpTripUrl;
- (void)setJumpTripUrl:;
- (id)regTrafficInfos;
- (void)setRegTrafficInfos:;
- (id)initWithDictionary:error:;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:;
- (long long)num;
- (void)setNum:;
+ (id)regTrafficInfosJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
