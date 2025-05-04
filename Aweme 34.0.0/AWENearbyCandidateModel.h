@interface AWENearbyCandidateModel : AWEBaseApiModel
@property (nonatomic) NSString name;
@property (nonatomic) q uid;
@property (nonatomic) NSString recommendReason;
@property (nonatomic) NSString schema;
@property (nonatomic) AWEURLModel avatarURLModel;
- (void)setAvatarURLModel:;
- (void)setRecommendReason:;
- (id)recommendReason;
- (id)avatarURLModel;
- (id)schema;
- (void)setUid:;
- (void)setSchema:;
- (long long)uid;
- (void).cxx_destruct;
- (void)setName:;
- (id)name;
+ (id)avatarURLModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
