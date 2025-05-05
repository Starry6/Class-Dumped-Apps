@interface IESECListKitItemConfigModel : MTLModel
@property (nonatomic) IESECListKitLynxCardConfigModel lynxConfig;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)lynxConfig;
- (void)setLynxConfig:;
- (void).cxx_destruct;
+ (id)lynxConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
