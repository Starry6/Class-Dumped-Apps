@interface AWECreateRepostResponseModel : AWEBaseApiModel
@property (nonatomic) AWEAwemeModel aweme;
@property (nonatomic) AWECommentModel comment;
@property (nonatomic) NSString labelInfo;
@property (nonatomic) NSString verifyType;
- (id)aweme;
- (void)setAweme:;
- (id)comment;
- (void).cxx_destruct;
- (id)labelInfo;
- (void)setComment:;
- (void)setLabelInfo:;
- (void)setVerifyType:;
- (id)verifyType;
+ (id)awemeJSONTransformer;
+ (id)commentJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
