@interface BDALokiSendEventParamModel : BDXBridgeModel
@property (nonatomic) NSString componentId;
@property (nonatomic) NSString event;
@property (nonatomic) NSDictionary data;
- (void)setComponentId:;
- (id)componentId;
- (void)setEvent:;
- (id)event;
- (id)data;
- (void).cxx_destruct;
- (void)setData:;
+ (BOOL)automaticallyDefaultMapping;
+ (id)JSONKeyPathsByPropertyKey;
@end
