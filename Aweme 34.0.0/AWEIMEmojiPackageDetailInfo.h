@interface AWEIMEmojiPackageDetailInfo : MTLModel
@property (nonatomic) AWEIMmoticonThemeResponseModel packageInfo;
@property (nonatomic) NSArray stickers;
@property (nonatomic) NSDictionary dictionaryValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)packageInfo;
- (void)setPackageInfo:;
- (void).cxx_destruct;
- (id)stickers;
- (void)setStickers:;
+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;
+ (id)stickersJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
