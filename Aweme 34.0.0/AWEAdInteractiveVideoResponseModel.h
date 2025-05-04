@interface AWEAdInteractiveVideoResponseModel : AWEBaseApiModel
@property (nonatomic) NSString message;
@property (nonatomic) NSNumber code;
@property (nonatomic) AWEAdInteractiveVideoResponseDataModel data;
- (id)code;
- (id)message;
- (void)setCode:;
- (void)setData:;
- (void).cxx_destruct;
- (id)data;
- (void)setMessage:;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)dataJSONTransformer;
@end
