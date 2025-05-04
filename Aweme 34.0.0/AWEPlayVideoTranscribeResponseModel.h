@interface AWEPlayVideoTranscribeResponseModel : AWEBaseApiModel
@property (nonatomic) NSInteger transcribeStatusCode;
@property (nonatomic) NSString transcribeStatusMsg;
@property (nonatomic) NSArray videoParagraphs;
- (int)transcribeStatusCode;
- (void)setTranscribeStatusCode:;
- (id)transcribeStatusMsg;
- (void)setTranscribeStatusMsg:;
- (id)videoParagraphs;
- (void)setVideoParagraphs:;
- (void).cxx_destruct;
+ (id)videoParagraphsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
