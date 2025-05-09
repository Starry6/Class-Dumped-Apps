@interface CKCacheInfo_OC : NSObject
@property (nonatomic) NSString primaryKey;
@property (nonatomic) NSString effectId;
@property (nonatomic) NSString panel;
@property (nonatomic) NSString resourceId;
@property (nonatomic) NSString uri;
@property (nonatomic) NSString modelName;
@property (nonatomic) q type;
@property (nonatomic) q bizSpace;
@property (nonatomic) q source;
@property (nonatomic) double lastAccessTime;
@property (nonatomic) Q fileSize;
@property (nonatomic) Q useCount;
@property (nonatomic) NSDictionary extraMap;
- (long long)bizSpace;
- (id)cppModel;
- (id)extraMap;
- (id)initWithCppModel:;
- (double)lastAccessTime;
- (id)resourceId;
- (void)setBizSpace:;
- (void)setExtraMap:;
- (void)setLastAccessTime:;
- (void)setResourceId:;
- (unsigned long long)fileSize;
- (id)uri;
- (id)modelName;
- (void)setModelName:;
- (id)init;
- (void)setType:;
- (void)setUseCount:;
- (id)primaryKey;
- (long long)type;
- (void)setFileSize:;
- (unsigned long long)useCount;
- (void).cxx_destruct;
- (long long)source;
- (id)description;
- (void)setSource:;
- (id).cxx_construct;
- (void)setUri:;
- (id)panel;
- (void)setPrimaryKey:;
- (id)effectId;
- (void)setPanel:;
- (void)setEffectId:;
+ (id)toAbsolutePath:;
+ (id)toRelativePath:;
@end
