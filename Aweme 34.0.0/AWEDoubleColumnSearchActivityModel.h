@interface AWEDoubleColumnSearchActivityModel : MTLModel
@property (nonatomic) NSString url;
@property (nonatomic) NSString bizParams;
@property (nonatomic) NSString bizParamsV2;
@property (nonatomic) BOOL needHidePendant;
@property (nonatomic) NSString localGeckoVersion;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)bizParams;
- (void)setBizParams:;
- (void)setLocalGeckoVersion:;
- (id)localGeckoVersion;
- (id)bizParamsV2;
- (BOOL)needHidePendant;
- (void)setBizParamsV2:;
- (void)setNeedHidePendant:;
- (void)setUrl:;
- (void).cxx_destruct;
- (id)url;
+ (id)JSONKeyPathsByPropertyKey;
@end
