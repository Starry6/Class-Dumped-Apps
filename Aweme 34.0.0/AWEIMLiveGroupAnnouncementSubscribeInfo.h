@interface AWEIMLiveGroupAnnouncementSubscribeInfo : AWEBaseApiModel
@property (nonatomic) Q subscribeCount;
@property (nonatomic) NSArray subscribeList;
@property (nonatomic) Q subscribeStatus;
- (unsigned long long)subscribeStatus;
- (id)subscribeList;
- (void)setSubscribeList:;
- (void)setSubscribeStatus:;
- (unsigned long long)subscribeCount;
- (void)setSubscribeCount:;
- (void).cxx_destruct;
+ (id)subscribeListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
