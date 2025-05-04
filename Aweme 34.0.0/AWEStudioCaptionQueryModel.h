@interface AWEStudioCaptionQueryModel : ACCBaseApiModel
@property (nonatomic) NSString captionId;
@property (nonatomic) q code;
@property (nonatomic) NSString message;
@property (nonatomic) NSArray captions;
- (id)captions;
- (void)setCaptions:;
- (id)captionId;
- (void)setCaptionId:;
- (long long)code;
- (id)message;
- (void)setCode:;
- (void).cxx_destruct;
- (void)setMessage:;
+ (id)captionsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
