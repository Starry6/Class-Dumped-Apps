@interface CSJRewardedBannerUgenRender : NSObject
@property (nonatomic) CSJRewardedBannerRenderConfig renderConfig;
@property (nonatomic) @? renderResult;
@property (nonatomic) @? clickHandler;
@property (nonatomic) UgenEngine ugenEngine;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)bizData;
- (id)clickHandler;
- (void)fetchDSLDict:;
- (void)inner_renderWithDSLDict:;
- (void)onTemplateParseBegin:engine:;
- (void)onTemplateParseEnd:engine:;
- (void)onTemplateRenderBegin:engine:;
- (void)onTemplateRenderEnd:engine:;
- (void)onUgenEvent:success:failed:;
- (id)renderResult;
- (void)renderWithConfig:renderResult:clickHandler:;
- (void)setClickHandler:;
- (void)setRenderResult:;
- (void)setUgenEngine:;
- (id)ugenEngine;
- (id)renderConfig;
- (void)setRenderConfig:;
- (void).cxx_destruct;
@end
