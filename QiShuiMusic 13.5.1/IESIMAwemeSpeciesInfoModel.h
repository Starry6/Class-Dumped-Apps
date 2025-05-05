@interface IESIMAwemeSpeciesInfoModel : MTLModel
@property (nonatomic) NSNumber speciesID;
@property (nonatomic) IESIMURLModel iconURL;
@property (nonatomic) NSString content;
@property (nonatomic) NSString schema;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setSpeciesID:;
- (id)speciesID;
- (void)setIconURL:;
- (id)content;
- (void)setContent:;
- (id)schema;
- (void)setSchema:;
- (void).cxx_destruct;
- (id)iconURL;
+ (id)iconURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
