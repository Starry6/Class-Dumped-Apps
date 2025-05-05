@interface IESIMRiskModel : IESIMBaseApiModel
@property (nonatomic) NSNumber voting;
@property (nonatomic) NSNumber warning;
@property (nonatomic) NSNumber riskSinking;
@property (nonatomic) NSString content;
@property (nonatomic) NSNumber notice;
@property (nonatomic) NSString url;
- (void)setRiskSinking:;
- (id)riskSinking;
- (void)setVoting:;
- (id)voting;
- (id)content;
- (void)setContent:;
- (id)url;
- (void)setUrl:;
- (id)warning;
- (void).cxx_destruct;
- (id)notice;
- (void)setNotice:;
- (void)setWarning:;
+ (id)JSONKeyPathsByPropertyKey;
@end
