@interface AWEIMFacePuzzleNLEConfig : NSObject
@property (nonatomic) NSString effectID;
@property (nonatomic) UIImage image;
@property (nonatomic) NSArray imagePathArray;
@property (nonatomic) NSDictionary params;
@property (nonatomic) BOOL useEffectCache;
@property (nonatomic) NSString cachedEffectFilePath;
@property (nonatomic) @? completion;
- (id)imagePathArray;
- (void)setImagePathArray:;
- (void)setEffectID:;
- (void)setUseEffectCache:;
- (void)setCachedEffectFilePath:;
- (BOOL)useEffectCache;
- (id)cachedEffectFilePath;
- (id)image;
- (id)completion;
- (void)setImage:;
- (void)setCompletion:;
- (void).cxx_destruct;
- (id)params;
- (void)setParams:;
- (id)effectID;
@end
