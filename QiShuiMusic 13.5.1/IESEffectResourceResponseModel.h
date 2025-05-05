@interface IESEffectResourceResponseModel : MTLModel
@property (nonatomic) NSArray resourceList;
@property (nonatomic) NSArray urlPrefixes;
@property (nonatomic) NSString iconURI;
@property (nonatomic) NSArray iconURLs;
@property (nonatomic) NSString idMap;
@property (nonatomic) NSString effectId;
@property (nonatomic) BOOL needTriggerDownload;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)generateAllURLs;
- (id)iconURI;
- (id)idMap;
- (BOOL)needTriggerDownload;
- (BOOL)resourcesAllDownloaded;
- (void)setNeedTriggerDownload:;
- (id)urlPrefixes;
- (id)resourceList;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)allResourcePaths;
- (BOOL)isEqual:;
- (id)iconURLs;
- (id)effectId;
+ (id)resourceListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
