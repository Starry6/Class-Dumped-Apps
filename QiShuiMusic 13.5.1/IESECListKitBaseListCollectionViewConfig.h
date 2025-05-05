@interface IESECListKitBaseListCollectionViewConfig : NSObject
@property (nonatomic) # collectionViewClass;
@property (nonatomic) BOOL enableStickHeader;
@property (nonatomic) BOOL enableStickCollectionView;
@property (nonatomic) BOOL enableInteractiveMovement;
- (Class)collectionViewClass;
- (BOOL)enableInteractiveMovement;
- (BOOL)enableStickCollectionView;
- (BOOL)enableStickHeader;
- (void)setCollectionViewClass:;
- (void)setEnableInteractiveMovement:;
- (void)setEnableStickCollectionView:;
- (void)setEnableStickHeader:;
- (void).cxx_destruct;
+ (id)defaultConfig;
@end
