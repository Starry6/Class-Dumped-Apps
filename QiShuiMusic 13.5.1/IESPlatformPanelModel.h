@interface IESPlatformPanelModel : MTLModel
@property (nonatomic) NSString text;
@property (nonatomic) NSArray iconURLs;
@property (nonatomic) NSString iconURI;
@property (nonatomic) NSArray tags;
@property (nonatomic) NSString tagsUpdatedTimeStamp;
@property (nonatomic) NSString extra;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)iconURI;
- (void)setIconURI:;
- (void)setTagsUpdatedTimeStamp:;
- (id)tagsUpdatedTimeStamp;
- (id)extra;
- (id)tags;
- (void)setTags:;
- (void)setText:;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)text;
- (BOOL)isEqual:;
- (id)iconURLs;
- (void)setIconURLs:;
+ (BOOL)isArray:equalToArray:;
+ (id)JSONKeyPathsByPropertyKey;
@end
