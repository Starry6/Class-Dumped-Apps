@interface AnnieXLynxTemplateMeta : NSObject
@property (nonatomic) LynxTemplateBundle templateBundle;
@property (nonatomic) NSData templateData;
@property (nonatomic) BDXBridgeLynxSignVerifier lynxSignVerifier;
- (id)initWithBundleAndData:templateData:lynxSignVerifier:;
- (id)lynxSignVerifier;
- (void)setLynxSignVerifier:;
- (void)setTemplateBundle:;
- (void)setTemplateData:;
- (id)templateBundle;
- (id)templateData;
- (void).cxx_destruct;
@end
