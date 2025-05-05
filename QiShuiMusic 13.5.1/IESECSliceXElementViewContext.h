@interface IESECSliceXElementViewContext : NSObject
@property (nonatomic) IESECSliceXContainerView containerView;
@property (nonatomic) IESECSliceXTemplateConfig templateConfig;
@property (nonatomic) IESECSliceXUIFont fontContext;
- (void)setFontContext:;
- (id)fontContext;
- (void)setTemplateConfig:;
- (id)templateConfig;
- (id)containerView;
- (void)setContainerView:;
- (void).cxx_destruct;
@end
