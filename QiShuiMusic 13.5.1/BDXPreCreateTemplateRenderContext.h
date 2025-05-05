@interface BDXPreCreateTemplateRenderContext : NSObject
@property (nonatomic) LynxTemplateRender templateRender;
@property (nonatomic) NSString containerID;
@property (nonatomic) BDLynxBridge bridge;
- (void)setTemplateRender:;
- (id)templateRender;
- (id)containerID;
- (void)setContainerID:;
- (id)bridge;
- (void).cxx_destruct;
- (void)setBridge:;
@end
