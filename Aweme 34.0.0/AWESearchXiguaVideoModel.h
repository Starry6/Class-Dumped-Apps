@interface AWESearchXiguaVideoModel : AWEBaseApiModel
@property (nonatomic) NSString itemID;
@property (nonatomic) NSString videoTitle;
@property (nonatomic) NSNumber createTime;
@property (nonatomic) NSNumber playCount;
@property (nonatomic) NSNumber duration;
@property (nonatomic) AWEURLModel coverURL;
- (id)videoTitle;
- (void)setVideoTitle:;
- (id)itemID;
- (void)setItemID:;
- (id)createTime;
- (id)playCount;
- (void)setCreateTime:;
- (void).cxx_destruct;
- (id)duration;
- (void)setPlayCount:;
- (id)coverURL;
- (void)setCoverURL:;
+ (id)coverURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
