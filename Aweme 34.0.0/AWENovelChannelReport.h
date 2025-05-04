@interface AWENovelChannelReport : NSObject
@property (nonatomic) NSString urlPath;
@property (nonatomic) double beginLoadTemplateTime;
- (void)reportEvent:metric:category:extra:;
- (void)setUrlPath:;
- (void)setBeginLoadTemplateTime:;
- (double)beginLoadTemplateTime;
- (id)getEventName:;
- (id)mergeWithCommonCategory:;
- (void)reportEvent:metric:category:extra:maySample:;
- (void)renderTemplateFailWithBlankStatus:hasLoading:;
- (void)refreshChannelSpan:;
- (void)renderTemplateFail:errMsg:;
- (void)firstScreenLynxSpanFromTapChannel;
- (void)loadTemplate:type:fetchType:;
- (void)firstScreenLynxSpanFromLoadTemplate;
- (id)init;
- (id)urlPath;
- (void).cxx_destruct;
- (void)startMonitor;
- (id)initWithUrl:;
@end
