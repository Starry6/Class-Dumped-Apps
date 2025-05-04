@interface AWEStudioAIEnhanceAIPResultImageItem : NSObject
@property (nonatomic) NSString filePath;
@property (nonatomic) AWEURLModel urlInfo;
- (id)initWithFilePath:urlInfo:;
- (id)filePath;
- (void)encodeWithCoder:;
- (void)setFilePath:;
- (void).cxx_destruct;
- (id)initWithCoder:;
- (id)urlInfo;
- (void)setUrlInfo:;
@end
