@interface AWELokiMergedMVListResponseDataInfos : MTLModel
@property (nonatomic) q cursor;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) NSArray templates;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)cursor;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void)setCursor:;
- (id)templates;
- (void).cxx_destruct;
- (void)setTemplates:;
+ (id)templatesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
