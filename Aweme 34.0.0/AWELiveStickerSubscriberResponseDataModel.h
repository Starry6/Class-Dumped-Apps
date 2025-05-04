@interface AWELiveStickerSubscriberResponseDataModel : AWEBaseApiModel
@property (nonatomic) AWELiveStickerSubscriberResponseModel subscriberData;
- (id)subscriberData;
- (void)setSubscriberData:;
- (void).cxx_destruct;
+ (id)subscriberDataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
