@interface LynxCollectionViewCell : UICollectionViewCell
@property (nonatomic) LynxUIComponent ui;
@property (nonatomic) NSIndexPath updateToPath;
@property (nonatomic) BOOL loading;
@property (nonatomic) NSString itemKey;
@property (nonatomic) q operationID;
@property (nonatomic) BOOL isPartOnLayout;
- (void)addLynxUI:;
- (void)adjustComponentFrame;
- (BOOL)isPartOnLayout;
- (id)removeLynxUI;
- (void)setIsPartOnLayout:;
- (void)setItemKey:;
- (void)setUpdateToPath:;
- (id)updateToPath;
- (void)setLoading:;
- (void)dealloc;
- (id)preferredLayoutAttributesFittingAttributes:;
- (BOOL)loading;
- (void)prepareForReuse;
- (long long)operationID;
- (void)applyLayoutAttributes:;
- (void).cxx_destruct;
- (id)ui;
- (void)setOperationID:;
- (void)setUi:;
- (void)restartAnimation;
- (id)itemKey;
@end
