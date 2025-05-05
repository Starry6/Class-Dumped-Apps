@interface IESDPBAdaptor : NSObject
@property (nonatomic) NSString business;
@property (nonatomic) NSMutableDictionary definitionRegisters;
@property (nonatomic) NSMutableDictionary shrinkRegisters;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)shrinkRegisters;
- (BOOL)canRequestInPBForParseConfig:;
- (BOOL)canRequestInPBForParseConfig:reason:;
- (id)definitionRegisters;
- (id)parseFromDynamicPBData:withParseConfig:;
- (id)parseMessageWithPBData:withParseConfig:;
- (void)processDynamicPBConfigForChannel:withDefinitionString:shrinkString:;
- (void)setDefinitionRegisters:;
- (void)setShrinkRegisters:;
- (BOOL)enabled;
- (void)setEnabled:;
- (void).cxx_destruct;
- (id)business;
- (void)setBusiness:;
- (id)initWithBusiness:;
@end
