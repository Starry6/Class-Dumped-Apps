@interface AWEVideoCoverTemplateJsonHelper : NSObject
+ (id)p_jsonStringEncoded:;
+ (id)templateJson:originBounds:cutRect:;
+ (id)emptyTemplateJsonFor:cutRect:;
+ (id)videoCoverEditCutConfigForTemplateJson:;
+ (id)pathForEmptyTemplateJsonIsLandscape:;
+ (id)templateJsonDictionary:originBounds:cutRect:;
+ (id)p_jsonDictionaryWithString:;
+ (id)getMainLayerJsonAtTemplateJson:;
+ (id)replaceMainLayerJsonAtTemplateJson:withMainLayerJson:;
+ (id)emptyTemplateJsonNameIsLandscape:;
+ (id)adjustConfigOriginBounds:cutRect:targetBounds:;
@end
