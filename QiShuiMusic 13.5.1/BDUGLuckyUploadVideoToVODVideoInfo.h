@interface BDUGLuckyUploadVideoToVODVideoInfo : BDXBridgeModel
@property (nonatomic) NSString vid;
@property (nonatomic) NSString coverUri;
@property (nonatomic) NSDictionary metaInfo;
- (void)setVid:;
- (id)vid;
- (id)coverUri;
- (void)setCoverUri:;
- (void).cxx_destruct;
- (id)metaInfo;
- (void)setMetaInfo:;
+ (id)JSONKeyPathsByPropertyKey;
@end
