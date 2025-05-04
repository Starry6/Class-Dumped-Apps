@interface AWEIMMyContentFeedbackDigModel : AWEBaseApiModel
@property (nonatomic) NSNumber uid;
@property (nonatomic) NSString secUserID;
@property (nonatomic) NSString nickname;
@property (nonatomic) AWEURLModel urlModel;
@property (nonatomic) NSArray tags;
- (id)secUserID;
- (void)setSecUserID:;
- (id)urlModel;
- (void)setUrlModel:;
- (id)nickname;
- (void)setUid:;
- (id)tags;
- (id)uid;
- (void)setTags:;
- (void).cxx_destruct;
- (void)setNickname:;
+ (id)urlModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
