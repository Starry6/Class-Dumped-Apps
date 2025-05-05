@interface IESIMGeneralFilmTelevisionTopicItemModel : IESIMBaseApiModel
@property (nonatomic) NSString topicID;
@property (nonatomic) BOOL isCommerce;
@property (nonatomic) NSString name;
@property (nonatomic) IESIMURLModel posterURL;
@property (nonatomic) NSNumber videoCount;
@property (nonatomic) NSNumber type;
@property (nonatomic) NSArray videoListArray;
- (BOOL)isCommerce;
- (id)posterURL;
- (void)setIsCommerce:;
- (void)setPosterURL:;
- (void)setVideoListArray:;
- (id)videoListArray;
- (void)setName:;
- (void)setTopicID:;
- (void)setType:;
- (id)topicID;
- (id)type;
- (void).cxx_destruct;
- (id)name;
- (id)videoCount;
- (void)setVideoCount:;
+ (id)posterURLJSONTransformer;
+ (id)videoListArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
