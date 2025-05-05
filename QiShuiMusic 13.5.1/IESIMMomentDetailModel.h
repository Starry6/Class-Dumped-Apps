@interface IESIMMomentDetailModel : MTLModel
@property (nonatomic) NSString momentID;
@property (nonatomic) NSString momentName;
@property (nonatomic) IESIMURLModel coverURL;
@property (nonatomic) Q userCount;
@property (nonatomic) NSString extra;
@property (nonatomic) NSString desc;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)momentID;
- (id)momentName;
- (void)setExtra:;
- (void)setMomentID:;
- (void)setMomentName:;
- (id)extra;
- (id)desc;
- (void)setDesc:;
- (void).cxx_destruct;
- (unsigned long long)userCount;
- (void)setUserCount:;
- (id)coverURL;
- (void)setCoverURL:;
+ (id)coverURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
