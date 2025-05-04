@interface AWEGrouponLifeFeedsCoverBottomInfo : AWEBaseApiModel
@property (nonatomic) NSArray tags;
@property (nonatomic) NSString jumpUrl;
@property (nonatomic) BOOL hasAdTag;
- (id)jumpUrl;
- (void)setJumpUrl:;
- (BOOL)hasAdTag;
- (void)setHasAdTag:;
- (id)tags;
- (void)setTags:;
- (void).cxx_destruct;
+ (BOOL)automaticallyDefaultMapping;
+ (id)tagsJSONTransformer;
@end
