@interface AWEGrouponHalfScreenPerfConfig : NSObject
@property (nonatomic) double feedRenderDelayTimeOut;
@property (nonatomic) double transformerRenderDelayTimeOut;
@property (nonatomic) BOOL enableTransformerRenderDelay;
@property (nonatomic) BOOL enableFeedRenderDelay;
@property (nonatomic) BOOL enableOpenAhead;
@property (nonatomic) BOOL enableContainerOpenAhead;
@property (nonatomic) BOOL disableTransformerCache;
@property (nonatomic) BOOL disableFeedCache;
- (BOOL)enableFeedRenderDelay;
- (double)feedRenderDelayTimeOut;
- (BOOL)enableTransformerRenderDelay;
- (BOOL)disableTransformerCache;
- (BOOL)disableFeedCache;
- (void)setFeedRenderDelayTimeOut:;
- (double)transformerRenderDelayTimeOut;
- (void)setTransformerRenderDelayTimeOut:;
- (void)setEnableTransformerRenderDelay:;
- (void)setEnableFeedRenderDelay:;
- (BOOL)enableOpenAhead;
- (void)setEnableOpenAhead:;
- (BOOL)enableContainerOpenAhead;
- (void)setEnableContainerOpenAhead:;
- (void)setDisableTransformerCache:;
- (void)setDisableFeedCache:;
@end
