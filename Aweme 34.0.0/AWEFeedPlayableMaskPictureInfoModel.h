@interface AWEFeedPlayableMaskPictureInfoModel : MTLModel
@property (nonatomic) NSString title;
@property (nonatomic) NSArray pictureList;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)pictureList;
- (void)setPictureList:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
+ (id)pictureListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
