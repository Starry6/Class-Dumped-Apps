@interface BUDefaultImageInfo : NSObject
@property (nonatomic) q w;
@property (nonatomic) q h;
@property (nonatomic) q size;
@property (nonatomic) NSString colorSpace;
@property (nonatomic) NSString textureFormat;
@property (nonatomic) NSString filterName;
@property (nonatomic) NSString extDesc;
@property (nonatomic) NSString extType;
- (id)extDesc;
- (id)extType;
- (void)setExtDesc:;
- (void)setExtType:;
- (long long)h;
- (long long)w;
- (void)setColorSpace:;
- (id)colorSpace;
- (void).cxx_destruct;
- (void)setW:;
- (id)filterName;
- (void)setH:;
- (void)setSize:;
- (long long)size;
- (void)setFilterName:;
- (id)textureFormat;
- (void)setTextureFormat:;
@end
