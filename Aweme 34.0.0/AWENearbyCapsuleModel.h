@interface AWENearbyCapsuleModel : AWEBaseApiModel
@property (nonatomic) NSString title;
@property (nonatomic) AWEURLModel iconURLModel;
@property (nonatomic) NSString outerShowReq;
@property (nonatomic) NSString buttonNameL3;
- (id)iconURLModel;
- (void)setIconURLModel:;
- (id)outerShowReq;
- (id)buttonNameL3;
- (void)setOuterShowReq:;
- (void)setButtonNameL3:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
+ (id)iconURLModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
