@interface AWEMusicStreamingImpl.ReportActionResponse : AWEMusicStreamingImpl.LunaBaseApiResponseModel
@property (nonatomic) NSString result;
@property (nonatomic) NSString message;
- (id)initWithDictionary:error:;
- (id)init;
- (void)setResult:;
- (id)message;
- (void).cxx_destruct;
- (void)setMessage:;
- (id)initWithCoder:;
- (id)result;
+ (id)JSONKeyPathsByPropertyKey;
@end
