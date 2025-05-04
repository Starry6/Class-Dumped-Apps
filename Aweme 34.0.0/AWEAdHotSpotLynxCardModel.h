@interface AWEAdHotSpotLynxCardModel : AWEBaseApiModel
@property (nonatomic) Q feedCardType;
@property (nonatomic) NSString schema;
@property (nonatomic) NSString feData;
@property (nonatomic) NSString settingKey;
- (id)feData;
- (void)setFeData:;
- (unsigned long long)feedCardType;
- (void)setFeedCardType:;
- (id)schema;
- (void)setSchema:;
- (void).cxx_destruct;
- (void)setSettingKey:;
- (id)settingKey;
+ (id)JSONKeyPathsByPropertyKey;
@end
