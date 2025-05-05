@interface MDLNormalMapTexture : MDLTexture
- (void).cxx_destruct;
- (id)generateDataAtLevel:selector:;
- (id)initByGeneratingNormalMapWithTexture:name:smoothness:contrast:;
@end
