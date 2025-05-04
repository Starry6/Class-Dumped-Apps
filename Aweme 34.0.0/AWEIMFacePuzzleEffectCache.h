@interface AWEIMFacePuzzleEffectCache : NSObject
@property (nonatomic) NSString effectPath;
@property (nonatomic) NSString effectType;
@property (nonatomic) NSString effectID;
@property (nonatomic) double updateTime;
- (id)effectPath;
- (void)setEffectPath:;
- (void)setEffectID:;
- (void)updateCacheWithPath:;
- (double)updateTime;
- (BOOL)isValid;
- (void).cxx_destruct;
- (id)effectType;
- (void)setEffectType:;
- (void)setUpdateTime:;
- (id)effectID;
@end
