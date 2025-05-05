@interface IESLiveSaaSToastLoadingConfig : NSObject
@property (nonatomic) NSString title;
@property (nonatomic) NSString imageName;
@property (nonatomic) NSString webpName;
@property (nonatomic) NSString lottieName;
@property (nonatomic) NSProgress loadingProgress;
@property (nonatomic) BOOL canBeClosed;
@property (nonatomic) @? closeActionBlock;
- (void)setCanBeClosed:;
- (BOOL)canBeClosed;
- (id)closeActionBlock;
- (id)lottieName;
- (BOOL)p_isToastLoadingConfigValid;
- (void)setCloseActionBlock:;
- (void)setLottieName:;
- (void)setWebpName:;
- (id)webpName;
- (void)setImageName:;
- (id)imageName;
- (void)setTitle:;
- (id)loadingProgress;
- (id)title;
- (void)setLoadingProgress:;
- (void).cxx_destruct;
+ (id)defaultConfig;
@end
