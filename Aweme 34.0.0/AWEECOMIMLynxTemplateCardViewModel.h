@interface AWEECOMIMLynxTemplateCardViewModel : AWEECOMIMLynxViewViewModel
@property (nonatomic) NSString lynxScheme;
@property (nonatomic) NSNumber defaultHeight;
@property (nonatomic) NSNumber defaultWidth;
- (id)lynxCardSchema;
- (id)lynxScheme;
- (void)setLynxScheme:;
- (id)initWithMsgModel:;
- (void)setDefaultHeight:;
- (id)_buildClientData;
- (void)receiveDynamicDataWithSuccess:forceUpdate:;
- (id)lynxDefaultSize;
- (id)defaultHeight;
- (void).cxx_destruct;
- (id)defaultWidth;
- (id)cardType;
- (void)setDefaultWidth:;
@end
