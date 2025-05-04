@interface AWEDouPlusResponseModel : AWEBaseApiModel
@property (nonatomic) BOOL pass;
@property (nonatomic) BOOL isAdExist;
@property (nonatomic) NSString host;
@property (nonatomic) NSString adID;
@property (nonatomic) NSString douPlusLinkUrl;
@property (nonatomic) NSString douPlusLiteLinkUrl;
@property (nonatomic) NSDictionary douPlusLogExtraDict;
- (id)adID;
- (void)setAdID:;
- (id)douPlusLiteLinkUrl;
- (id)douPlusLinkUrl;
- (id)douPlusLogExtraDict;
- (BOOL)isAdExist;
- (void)setIsAdExist:;
- (void)setDouPlusLinkUrl:;
- (void)setDouPlusLiteLinkUrl:;
- (void)setDouPlusLogExtraDict:;
- (void)setHost:;
- (id)host;
- (void).cxx_destruct;
- (BOOL)pass;
- (void)setPass:;
+ (id)JSONKeyPathsByPropertyKey;
@end
