@interface BDXBridgeCustomValueTransformer : NSObject
+ (id)dictionaryValueTransformerWithModelClass:;
+ (id)enumTransformerWithDictionary:;
+ (id)optionsTransformerWithDictionary:;
+ (id)colorTransformer;
@end
