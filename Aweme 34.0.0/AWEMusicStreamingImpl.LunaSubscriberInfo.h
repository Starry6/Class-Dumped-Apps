@interface AWEMusicStreamingImpl.LunaSubscriberInfo : AWEMusicStreamingImpl.LunaBaseApiModel
@property (nonatomic) NSString expireDate;
@property (nonatomic) BOOL isSubscriber;
- (id)jsonObjectDic;
- (id)initWithDictionary:error:;
- (id)init;
- (id)expireDate;
- (void)setExpireDate:;
- (void).cxx_destruct;
- (id)initWithCoder:;
- (BOOL)isSubscriber;
- (void)setIsSubscriber:;
+ (id)JSONKeyPathsByPropertyKey;
@end
