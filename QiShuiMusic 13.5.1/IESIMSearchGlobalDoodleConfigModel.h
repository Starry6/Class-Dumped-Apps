@interface IESIMSearchGlobalDoodleConfigModel : IESIMBaseApiModel
@property (nonatomic) NSString keyword;
@property (nonatomic) q resultFrom;
- (long long)resultFrom;
- (void)setResultFrom:;
- (void).cxx_destruct;
- (void)setKeyword:;
- (id)keyword;
+ (id)JSONKeyPathsByPropertyKey;
@end
