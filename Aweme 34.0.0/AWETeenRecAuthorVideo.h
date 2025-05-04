@interface AWETeenRecAuthorVideo : MTLModel
@property (nonatomic) NSString itemID;
@property (nonatomic) q diggCount;
@property (nonatomic) AWEURLModel coverUrl;
@property (nonatomic) q awemeType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)awemeType;
- (long long)diggCount;
- (void)setAwemeType:;
- (void)setDiggCount:;
- (void)setCoverUrl:;
- (id)coverUrl;
- (id)itemID;
- (void)setItemID:;
- (void).cxx_destruct;
+ (id)coverUrlJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
