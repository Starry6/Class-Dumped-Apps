@interface AWEIMDanmakuEmoticonCommerceSetting : MTLModel
@property (nonatomic) NSString commerceName;
@property (nonatomic) NSArray commerceTextList;
@property (nonatomic) q num;
@property (nonatomic) q startTime;
@property (nonatomic) q endTime;
@property (nonatomic) NSString headURLStr;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isInActivityPeriod;
- (id)headURLStr;
- (void)setHeadURLStr:;
- (id)commerceName;
- (void)setCommerceName:;
- (id)commerceTextList;
- (void)setCommerceTextList:;
- (void)setStartTime:;
- (long long)endTime;
- (void)setEndTime:;
- (void).cxx_destruct;
- (long long)startTime;
- (long long)num;
- (void)setNum:;
+ (id)modelCustomPropertyMapper;
+ (id)JSONKeyPathsByPropertyKey;
@end
