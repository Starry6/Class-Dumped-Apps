@interface AWEIMStickerResourceResponseModel : AWEBaseApiModel
@property (nonatomic) NSArray resources;
@property (nonatomic) NSArray forbiddenIds;
@property (nonatomic) q nextCursor;
@property (nonatomic) q totalCount;
@property (nonatomic) BOOL isCompleted;
@property (nonatomic) NSString customUpdateVersion;
@property (nonatomic) q stickerEnabelStatus;
- (long long)nextCursor;
- (void)setNextCursor:;
- (id)forbiddenIds;
- (void)setForbiddenIds:;
- (id)customUpdateVersion;
- (void)setCustomUpdateVersion:;
- (long long)stickerEnabelStatus;
- (void)setStickerEnabelStatus:;
- (BOOL)isCompleted;
- (id)resources;
- (long long)totalCount;
- (void)setResources:;
- (void).cxx_destruct;
- (void)setIsCompleted:;
- (void)setTotalCount:;
+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;
+ (id)resourcesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
