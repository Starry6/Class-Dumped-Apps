@interface AWEIMBaseNoticeSubscribeModelNew : IESIMBaseApiModel
@property (nonatomic) NSString name;
@property (nonatomic) q type;
@property (nonatomic) q unsubscribe;
- (void)setUnsubscribe:;
- (long long)type;
- (void)setType:;
- (void).cxx_destruct;
- (long long)unsubscribe;
- (void)setName:;
- (id)name;
+ (id)JSONKeyPathsByPropertyKey;
@end
