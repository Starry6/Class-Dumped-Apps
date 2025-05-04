@interface AWERelatedMusicAnchorModel : AWEBaseApiModel
@property (nonatomic) NSString type;
@property (nonatomic) NSString schemaURL;
@property (nonatomic) AWEURLModel imageURL;
@property (nonatomic) q priority;
@property (nonatomic) NSString extraInfo;
- (void)setSchemaURL:;
- (id)schemaURL;
- (long long)priority;
- (id)type;
- (void)setType:;
- (id)imageURL;
- (void)setPriority:;
- (void).cxx_destruct;
- (void)setImageURL:;
- (id)extraInfo;
- (void)setExtraInfo:;
+ (id)imageURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
