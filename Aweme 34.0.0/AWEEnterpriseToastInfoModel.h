@interface AWEEnterpriseToastInfoModel : AWEBaseApiModel
@property (nonatomic) q type;
@property (nonatomic) q position;
@property (nonatomic) NSString text;
@property (nonatomic) NSString jumpUrl;
@property (nonatomic) BOOL needTagInfo;
@property (nonatomic) NSString textColor;
@property (nonatomic) NSString jumpText;
@property (nonatomic) NSString jumpTextColor;
- (id)jumpText;
- (void)setJumpText:;
- (id)jumpUrl;
- (void)setJumpUrl:;
- (BOOL)needTagInfo;
- (void)setNeedTagInfo:;
- (id)jumpTextColor;
- (void)setJumpTextColor:;
- (void)setText:;
- (long long)position;
- (id)text;
- (void)setTextColor:;
- (long long)type;
- (void)setType:;
- (void).cxx_destruct;
- (id)textColor;
- (void)setPosition:;
+ (id)JSONKeyPathsByPropertyKey;
@end
