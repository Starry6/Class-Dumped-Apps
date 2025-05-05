@interface LynxLoadMeta : NSObject
@property (nonatomic) NSString url;
@property (nonatomic) q loadMode;
@property (nonatomic) q loadOption;
@property (nonatomic) NSData binaryData;
@property (nonatomic) LynxTemplateData initialData;
@property (nonatomic) LynxTemplateData globalProps;
@property (nonatomic) LynxTemplateBundle templateBundle;
@property (nonatomic) NSMutableDictionary lynxViewConfig;
- (void)setGlobalProps:;
- (void)setInitialData:;
- (id)globalProps;
- (id)initialData;
- (long long)loadOption;
- (id)lynxViewConfig;
- (void)setBinaryData:;
- (void)setLoadOption:;
- (void)setLynxViewConfig:;
- (void)setTemplateBundle:;
- (id)templateBundle;
- (id)url;
- (void)setUrl:;
- (void).cxx_destruct;
- (id)binaryData;
- (long long)loadMode;
- (void)setLoadMode:;
@end
