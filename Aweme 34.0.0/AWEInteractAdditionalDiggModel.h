@interface AWEInteractAdditionalDiggModel : AWEBaseApiModel
@property (nonatomic) q cid;
@property (nonatomic) AWEDiggNotificationIMSourceModel imSource;
@property (nonatomic) AWEURLModel coverOrigin;
@property (nonatomic) NSNumber mergeCount;
- (id)imSource;
- (id)mergeCount;
- (id)coverOrigin;
- (void)setMergeCount:;
- (void)setImSource:;
- (void)setCoverOrigin:;
- (long long)cid;
- (void).cxx_destruct;
- (void)setCid:;
+ (id)imSourceJSONTransformer;
+ (id)coverOriginJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
