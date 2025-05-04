@interface AWEEventNodeParamsModel : AWEBaseApiModel
@property (nonatomic) q mainHotSpotID;
@property (nonatomic) NSNumber count;
@property (nonatomic) q offset;
@property (nonatomic) NSString relateSpotID;
@property (nonatomic) NSString parantWord;
@property (nonatomic) NSString relateNodeWord;
- (void)setMainHotSpotID:;
- (void)setRelateSpotID:;
- (void)setParantWord:;
- (void)setRelateNodeWord:;
- (long long)mainHotSpotID;
- (id)relateSpotID;
- (id)relateNodeWord;
- (id)parantWord;
- (void)setCount:;
- (void)setOffset:;
- (long long)offset;
- (id)count;
- (void).cxx_destruct;
@end
