@interface IESDPBDefinitionGenerator : NSObject
- (id)generateDefinitionConfigFromJsonString:;
- (id)p_parseDefinitionNodeFromDic:;
- (id)p_parseDefinitionNodePropertyFromDic:;
@end
