@interface CSJDynamicAdInfoModel : NSObject
@property (nonatomic) NSDictionary originDictionary;
@property (nonatomic) NSString cid;
@property (nonatomic) q code;
@property (nonatomic) NSString dc;
@property (nonatomic) NSString langInfoLocalization;
@property (nonatomic) NSString log_extra;
@property (nonatomic) NSDictionary log_extraDict;
- (id)langInfoLocalization;
- (id)log_extra;
- (id)log_extraDict;
- (id)originDictionary;
- (void)processAdInfo_WithDictionary:;
- (void)setDc:;
- (void)setLangInfoLocalization:;
- (void)setLog_extra:;
- (void)setLog_extraDict:;
- (void)setOriginDictionary:;
- (id)initWithDictionary:;
- (long long)code;
- (id)cid;
- (void).cxx_destruct;
- (void)setCode:;
- (id)dc;
- (void)setCid:;
@end
