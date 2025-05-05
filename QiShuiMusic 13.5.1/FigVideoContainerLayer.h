@interface FigVideoContainerLayer : FigBaseCALayer
@property (nonatomic) CALayer videoLayer;
@property (nonatomic) BOOL shouldResizeVideoLayer;
@property (nonatomic) NSString STSLabel;
@property (nonatomic) BOOL forScrubbingOnly;
- (id)actionForKey:;
- (id)init;
- (void)dealloc;
- (void)setVideoLayer:;
- (void)setForScrubbingOnly:;
- (void)layoutSublayers;
- (void)setSTSLabel:;
- (BOOL)isForScrubbingOnly;
- (id)videoLayer;
- (id)STSLabel;
- (BOOL)shouldResizeVideoLayer;
- (void)setToneMapToStandardDynamicRange:;
- (void)setShouldResizeVideoLayer:;
+ (id)defaultActionForKey:;
@end
