@interface AWECodeGenCompressedUrlListModel : AWEBaseDataModel
@property (nonatomic) BOOL enable;
@property (nonatomic) NSString uriCommon;
@property (nonatomic) NSString paramCommon;
@property (nonatomic) NSArray urlArray;
- (id)urlArray;
- (void)setUrlArray:;
- (id)uriCommon;
- (id)paramCommon;
- (void)setUriCommon:;
- (void)setParamCommon:;
- (BOOL)enable;
- (void).cxx_destruct;
- (void)setEnable:;
+ (id)JSONKeyPathsByPropertyKey;
@end
