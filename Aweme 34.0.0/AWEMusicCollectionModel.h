@interface AWEMusicCollectionModel : AWEBaseApiModel
@property (nonatomic) NSString collectionID;
@property (nonatomic) NSString collectionName;
@property (nonatomic) AWEURLModel coverURL;
- (void).cxx_destruct;
- (id)collectionName;
- (id)collectionID;
- (id)coverURL;
+ (id)coverURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
