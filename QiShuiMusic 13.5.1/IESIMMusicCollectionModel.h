@interface IESIMMusicCollectionModel : IESIMBaseApiModel
@property (nonatomic) NSString collectionID;
@property (nonatomic) NSString collectionName;
@property (nonatomic) IESIMURLModel coverURL;
- (id)collectionName;
- (void).cxx_destruct;
- (id)collectionID;
- (id)coverURL;
+ (id)coverURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
