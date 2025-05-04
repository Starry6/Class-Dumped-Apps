@interface AWEGeneralFilmTelevisionTopicItemModel : AWEBaseApiModel
@property (nonatomic) NSString topicID;
@property (nonatomic) BOOL isCommerce;
@property (nonatomic) NSString name;
@property (nonatomic) AWEURLModel posterURL;
@property (nonatomic) NSNumber videoCount;
@property (nonatomic) NSNumber type;
@property (nonatomic) NSArray videoListArray;
- (BOOL)isCommerce;
- (void)setIsCommerce:;
- (id)posterURL;
- (void)setPosterURL:;
- (id)videoListArray;
- (void)setVideoListArray:;
- (void)setTopicID:;
- (id)topicID;
- (id)type;
- (void)setType:;
- (void).cxx_destruct;
- (void)setName:;
- (id)name;
- (void)setVideoCount:;
- (id)videoCount;
+ (id)posterURLJSONTransformer;
+ (id)videoListArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
