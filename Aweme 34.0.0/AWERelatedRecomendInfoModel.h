@interface AWERelatedRecomendInfoModel : AWEBaseApiModel
@property (nonatomic) BOOL enablePreload;
@property (nonatomic) NSInteger preloadTime;
- (int)preloadTime;
- (BOOL)enablePreload;
- (void)setEnablePreload:;
- (void)setPreloadTime:;
+ (id)JSONKeyPathsByPropertyKey;
@end
