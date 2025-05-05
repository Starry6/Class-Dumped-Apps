@interface BDXCommonCustomValueTransformer : NSObject
+ (id)dictionaryValueTransformerWithModelClass:;
+ (id)dictionaryValueTransformerWithModelClassForwardBlock:success:error:cls:allowMisMatch:;
+ (id)dictionaryValueTransformerWithModelClassReverseBlock:success:error:cls:allowMisMatch:;
+ (id)enumTransformerWithDictionary:;
+ (id)maybeDictionaryValueTransformerWithModelClass:;
+ (id)optionsTransformerWithDictionary:;
+ (id)colorTransformer;
@end
