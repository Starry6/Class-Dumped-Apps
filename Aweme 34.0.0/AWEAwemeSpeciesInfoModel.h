@interface AWEAwemeSpeciesInfoModel : MTLModel
@property (nonatomic) NSNumber speciesID;
@property (nonatomic) AWEURLModel iconURL;
@property (nonatomic) NSString content;
@property (nonatomic) NSString schema;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)speciesID;
- (void)setSpeciesID:;
- (id)schema;
- (void)setIconURL:;
- (id)content;
- (void)setSchema:;
- (id)iconURL;
- (void)setContent:;
- (void).cxx_destruct;
+ (id)iconURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
