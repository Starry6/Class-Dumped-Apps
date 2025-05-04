@interface AWETeenModeAlertImageModel : AWEBaseApiModel
@property (nonatomic) NSString url;
@property (nonatomic) Q width;
@property (nonatomic) Q height;
- (id)initWithImageURLStr:;
- (void)setUrl:;
- (void)setHeight:;
- (void)setWidth:;
- (unsigned long long)width;
- (void).cxx_destruct;
- (unsigned long long)height;
- (id)url;
+ (id)JSONKeyPathsByPropertyKey;
@end
