@interface AWEBaseListCollectionViewConfig : NSObject
@property (nonatomic) # collectionViewClass;
@property (nonatomic) BOOL enableStickHeader;
@property (nonatomic) BOOL enableStickCollectionView;
@property (nonatomic) BOOL enableInteractiveMovement;
@property (nonatomic) BOOL disableContentOffsetRestorationAnchor;
- (BOOL)disableContentOffsetRestorationAnchor;
- (void)setDisableContentOffsetRestorationAnchor:;
- (Class)collectionViewClass;
- (BOOL)enableStickHeader;
- (void)setEnableStickHeader:;
- (void)setCollectionViewClass:;
- (BOOL)enableStickCollectionView;
- (void)setEnableStickCollectionView:;
- (BOOL)enableInteractiveMovement;
- (void)setEnableInteractiveMovement:;
- (void).cxx_destruct;
+ (id)defaultConfig;
@end
