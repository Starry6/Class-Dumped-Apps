@interface AWEAdConvertCommentDetailModel : MTLModel
@property (nonatomic) NSArray commentTags;
@property (nonatomic) NSNumber commentCount;
@property (nonatomic) NSNumber positiveRate;
@property (nonatomic) NSString iconUrl;
@property (nonatomic) NSString desc;
@property (nonatomic) NSNumber negativeRate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)iconUrl;
- (void)setIconUrl:;
- (id)commentTags;
- (id)positiveRate;
- (id)negativeRate;
- (void)setPositiveRate:;
- (void)setNegativeRate:;
- (void)setCommentTags:;
- (void)setDesc:;
- (id)desc;
- (void).cxx_destruct;
- (id)commentCount;
- (void)setCommentCount:;
+ (id)JSONKeyPathsByPropertyKey;
@end
