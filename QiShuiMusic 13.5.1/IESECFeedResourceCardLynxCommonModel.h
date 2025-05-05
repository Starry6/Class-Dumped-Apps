@interface IESECFeedResourceCardLynxCommonModel : IESECFeedResourceCardBaseNode
@property (nonatomic) NSString lynxData;
@property (nonatomic) IESECFeedResourceCardLynxConfigModel lynxConfig;
- (id)lynxConfig;
- (id)lynxData;
- (void)setLynxConfig:;
- (void)setLynxData:;
- (void).cxx_destruct;
+ (id)lynxConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
