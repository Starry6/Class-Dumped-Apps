@interface AWEIMAchieveMateStickerView : UIView
@property (nonatomic) NSArray helloStickers;
@property (nonatomic) <IESIMConversationProtocol> conversation;
@property (nonatomic) UICollectionView collectionView;
@property (nonatomic) @? clickBlock;
@property (nonatomic) @? showBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setClickBlock:;
- (id)clickBlock;
- (id)showBlock;
- (void)setShowBlock:;
- (id)helloStickers;
- (void)setHelloStickers:;
- (void)configSubview;
- (id)p_getEmotionModelWithDisplayName:;
- (id)initWithModelList:conversation:;
- (id)collectionView;
- (id)collectionView:cellForItemAtIndexPath:;
- (void)collectionView:willDisplayCell:forItemAtIndexPath:;
- (void)setCollectionView:;
- (void)collectionView:didSelectItemAtIndexPath:;
- (void).cxx_destruct;
- (long long)collectionView:numberOfItemsInSection:;
- (id)conversation;
- (void)setConversation:;
@end
