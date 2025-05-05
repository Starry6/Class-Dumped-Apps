@interface IESLiveResouceManagerForImage : IESLiveResouceManager
@property (nonatomic) NSString imageNamedPrefix;
@property (nonatomic) NSDictionary fileMap;
- (id)imageNamedPrefix;
- (id)initWithAssetBundle:type:;
- (void)setImageNamedPrefix:;
- (id)fileMap;
- (void)setFileMap:;
- (id)objectForKey:;
- (void).cxx_destruct;
@end
