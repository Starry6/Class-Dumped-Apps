@interface AWEGrantByStrategyConfig : AWEBaseApiModel
@property (nonatomic) NSString grantStrategyType;
@property (nonatomic) NSString certificate;
@property (nonatomic) NSString sign;
@property (nonatomic) NSNumber timeStamp;
@property (nonatomic) NSString sendUniqId;
- (id)sign;
- (void)setSign:;
- (id)sendUniqId;
- (void)setSendUniqId:;
- (id)grantStrategyType;
- (void)setGrantStrategyType:;
- (void)setCertificate:;
- (id)certificate;
- (void).cxx_destruct;
- (id)timeStamp;
- (void)setTimeStamp:;
+ (id)JSONKeyPathsByPropertyKey;
@end
