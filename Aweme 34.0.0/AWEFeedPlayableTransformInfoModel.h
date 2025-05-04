@interface AWEFeedPlayableTransformInfoModel : MTLModel
@property (nonatomic) AWEFeedPlayableButtonInfoModel download;
@property (nonatomic) AWEFeedPlayableButtonInfoModel replay;
@property (nonatomic) AWEFeedPlayableButtonInfoModel landPage;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setReplay:;
- (id)landPage;
- (void)setLandPage:;
- (id)replay;
- (void).cxx_destruct;
- (id)download;
- (void)setDownload:;
+ (id)JSONKeyPathsByPropertyKey;
@end
