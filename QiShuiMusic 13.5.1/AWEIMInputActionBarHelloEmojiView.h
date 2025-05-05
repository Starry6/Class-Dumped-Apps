@interface AWEIMInputActionBarHelloEmojiView : UIView
@property (nonatomic) UICollectionView emojisCollectionView;
@property (nonatomic) NSArray emojis;
@property (nonatomic) <AWEIMInputActionBarHelloEmojiViewDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) BOOL isLightStyle;
- (id)emojisCollectionView;
- (BOOL)isLightStyle;
- (void)p_refreshUIStyle;
- (void)p_setupUI;
- (void)setEmojisCollectionView:;
- (void)setIsLightStyle:;
- (void)setupEmojisData:;
- (long long)collectionView:numberOfItemsInSection:;
- (void)setDelegate:;
- (id)collectionView:cellForItemAtIndexPath:;
- (void)collectionView:didSelectItemAtIndexPath:;
- (id)initWithFrame:;
- (id)delegate;
- (void).cxx_destruct;
- (void)setEmojis:;
- (id)emojis;
@end
