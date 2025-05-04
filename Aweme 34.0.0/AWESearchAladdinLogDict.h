@interface AWESearchAladdinLogDict : AWEBaseApiModel
@property (nonatomic) NSString aladdinSource;
@property (nonatomic) q docId;
@property (nonatomic) NSString subTokenType;
@property (nonatomic) NSString secondTokenType;
- (id)aladdinSource;
- (void)setAladdinSource:;
- (long long)docId;
- (id)subTokenType;
- (void)setDocId:;
- (void)setSubTokenType:;
- (id)secondTokenType;
- (void)setSecondTokenType:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
