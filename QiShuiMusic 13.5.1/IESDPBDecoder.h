@interface IESDPBDecoder : NSObject
+ (id)parseFromModel:;
+ (id)p_generateKeyValueDefinitionNodeWithKeyNodeProperty:valueNodeProperty:;
+ (id)p_generateKeyValueShrinkNodeWithValueShrinkNode:;
+ (long long)p_getLengthWithPropertyName:shrinkConfig:shrinkNode:;
+ (id)p_parseFromDefaultExtraFields:;
+ (id)p_parseFromFields:withDefinitionConfig:definitionNode:shrinkConfig:shrinkNode:shouldCompleteIDLField:numberToString:;
+ (id)p_shrinkValueWithRepeat:length:decodeArray:;
+ (id)parseMessageFromModel:;
@end
