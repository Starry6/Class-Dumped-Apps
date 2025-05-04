@interface AWEMomentDetailModel : MTLModel
@property (nonatomic) NSString momentID;
@property (nonatomic) NSString momentName;
@property (nonatomic) AWEURLModel coverURL;
@property (nonatomic) Q userCount;
@property (nonatomic) NSString extra;
@property (nonatomic) NSString desc;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setExtra:;
- (id)momentID;
- (void)setMomentID:;
- (id)momentName;
- (void)setMomentName:;
- (id)extra;
- (void)setDesc:;
- (id)desc;
- (void).cxx_destruct;
- (void)setUserCount:;
- (unsigned long long)userCount;
- (id)coverURL;
- (void)setCoverURL:;
+ (id)coverURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
