@interface AnnieXLynxTemplateBundleData : NSObject
@property (nonatomic) LynxTemplateBundle templateBundle;
@property (nonatomic) Q length;
@property (nonatomic) BDXBridgeLynxSignVerifier lynxSignVerifier;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithTemplateBundle:length:lynxSignVerifier:;
- (id)lynxSignVerifier;
- (void)setLynxSignVerifier:;
- (void)setTemplateBundle:;
- (id)templateBundle;
- (id)extra;
- (id)data;
- (void).cxx_destruct;
- (unsigned long long)length;
- (void)setLength:;
@end
