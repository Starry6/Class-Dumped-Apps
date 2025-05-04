@interface AWESearchAladdinTopicModel : AWEBaseApiModel
@property (nonatomic) NSString itemID;
@property (nonatomic) NSString awemeIDList;
@property (nonatomic) NSString imageURL;
@property (nonatomic) NSString name;
@property (nonatomic) q type;
@property (nonatomic) NSNumber videoCount;
- (id)awemeIDList;
- (void)setAwemeIDList:;
- (id)itemID;
- (void)setItemID:;
- (long long)type;
- (void)setType:;
- (id)imageURL;
- (void).cxx_destruct;
- (void)setName:;
- (id)name;
- (void)setImageURL:;
- (void)setVideoCount:;
- (id)videoCount;
+ (id)JSONKeyPathsByPropertyKey;
@end
