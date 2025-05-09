@interface CKGenericTemplateModel : CKBaseResponseModel
@property (nonatomic) CKGenericTemplateFile file;
@property (nonatomic) CKGenericTemplateCover cover;
@property (nonatomic) CKGenericTemplateAuthor author;
@property (nonatomic) CKGenericTemplateVideo video;
@property (nonatomic) CKGenericTemplateCover dynamicCover;
@property (nonatomic) q lokiId;
@property (nonatomic) BOOL isCollected;
@property (nonatomic) q usageAmount;
@property (nonatomic) q fragmentCount;
@property (nonatomic) NSString musicID;
@property (nonatomic) NSArray challenge;
@property (nonatomic) NSString segmentInfo;
@property (nonatomic) NSString templateId;
@property (nonatomic) NSString regionKey;
@property (nonatomic) Q type;
@property (nonatomic) NSString mediaId;
@property (nonatomic) NSString title;
@property (nonatomic) NSString desc;
@property (nonatomic) NSArray tags;
@property (nonatomic) NSString extra;
@property (nonatomic) NSString recId;
@property (nonatomic) NSDictionary businessData;
- (id)musicID;
- (void)setIsCollected:;
- (void)setUsageAmount:;
- (id)businessData;
- (id)cover;
- (id)dynamicCover;
- (BOOL)isCollected;
- (long long)lokiId;
- (id)recId;
- (id)regionKey;
- (void)setCover:;
- (void)setDynamicCover:;
- (void)setFragmentCount:;
- (void)setLokiId:;
- (void)setMusicID:;
- (void)setRecId:;
- (long long)usageAmount;
- (void)setChallenge:;
- (long long)fragmentCount;
- (id)extra;
- (id)tags;
- (id)desc;
- (id)author;
- (void)setFile:;
- (unsigned long long)type;
- (id)title;
- (id)file;
- (void).cxx_destruct;
- (void)setAuthor:;
- (void)setVideo:;
- (id)video;
- (id)challenge;
- (id)templateId;
- (id)segmentInfo;
- (id)mediaId;
- (void)setSegmentInfo:;
+ (id)JSONKeyPathsByPropertyKey;
@end
