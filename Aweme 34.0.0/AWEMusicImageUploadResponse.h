@interface AWEMusicImageUploadResponse : AWEBaseApiModel
@property (nonatomic) NSArray data;
@property (nonatomic) NSDictionary extra;
- (void)setExtra:;
- (id)extra;
- (void)setData:;
- (void).cxx_destruct;
- (id)data;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)dataJSONTransformer;
@end
