@interface AWEMusicStreamingImpl.LunaClipMappingResponse : AWEMusicStreamingImpl.LunaBaseApiResponseModel
@property (nonatomic) NSDictionary mappingMedia;
- (id)mappingMedia;
- (void)setMappingMedia:;
- (id)initWithDictionary:error:;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:;
+ (id)mappingMediaJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
