@interface BDXPreCreateTemplateRenderConfig : NSObject
@property (nonatomic) NSString schema;
@property (nonatomic) NSArray elements;
@property (nonatomic) LynxTemplateData initialData;
@property (nonatomic) NSDictionary globalProps;
- (void)setGlobalProps:;
- (void)setInitialData:;
- (id)globalProps;
- (id)initialData;
- (id)schema;
- (id)elements;
- (void)setElements:;
- (void)setSchema:;
- (void).cxx_destruct;
@end
