@interface AWEBatManOperationModel : MTLModel
@property (nonatomic) NSString appId;
@property (nonatomic) NSString title;
@property (nonatomic) NSString buttonTitle;
@property (nonatomic) NSString imageUrl;
@property (nonatomic) NSString buttonBgColor;
@property (nonatomic) NSDictionary appData;
@property (nonatomic) q direction;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setButtonBgColor:;
- (id)buttonBgColor;
- (long long)direction;
- (id)appId;
- (void)setDirection:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (id)buttonTitle;
- (void)setButtonTitle:;
- (id)imageUrl;
- (void)setAppId:;
- (void)setImageUrl:;
- (id)appData;
- (void)setAppData:;
+ (id)JSONKeyPathsByPropertyKey;
@end
