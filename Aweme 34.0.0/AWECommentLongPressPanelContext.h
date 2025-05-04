@interface AWECommentLongPressPanelContext : AWEPageContext
@property (nonatomic) @ containerDelegate;
@property (nonatomic) AWECommentLongPressPanelParam params;
@property (nonatomic) <AWECommentPanelLongPressConfigurationProtocol> config;
@property (nonatomic) AWECommentLongPressPanelBizParam bizParams;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)postNoticeJSBEventWithName:params:;
- (id)bizParams;
- (id)comment_superContext;
- (void)setBizParams:;
- (void)setConfig:;
- (id)init;
- (id)config;
- (void).cxx_destruct;
- (id)params;
- (void)setParams:;
- (id)containerDelegate;
- (void)setContainerDelegate:;
@end
