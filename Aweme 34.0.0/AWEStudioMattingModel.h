@interface AWEStudioMattingModel : NSObject
@property (nonatomic) NSURL fragmentURL;
@property (nonatomic) NSString fragmentPath;
@property (nonatomic) {?=qiIq} fragmentVideoTotalTime;
@property (nonatomic) NSString mattingOutPutPath;
@property (nonatomic) NSString aiModelPath;
@property (nonatomic) NSString mattingType;
@property (nonatomic) NSString chroma;
- (id)fragmentPath;
- (id)mattingType;
- (id)fragmentVideoTotalTime;
- (id)aiModelPath;
- (id)fragmentURL;
- (void)setFragmentURL:;
- (void)setFragmentPath:;
- (id)mattingOutPutPath;
- (void)setMattingOutPutPath:;
- (void)setAiModelPath:;
- (void)setMattingType:;
- (void).cxx_destruct;
- (id)chroma;
- (void)setChroma:;
@end
