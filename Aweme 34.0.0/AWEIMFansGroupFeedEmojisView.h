@interface AWEIMFansGroupFeedEmojisView : UIView
@property (nonatomic) UILabel titleLibel;
@property (nonatomic) UICollectionView collectionView;
@property (nonatomic) BOOL hasChatBg;
@property (nonatomic) NSArray emoticonModels;
@property (nonatomic) <AWEIMFansGroupFeedEmojisViewDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)__setupUI;
- (id)emoticonModels;
- (void)setEmoticonModels:;
- (void)configWithModels:;
- (BOOL)hasChatBg;
- (void)setHasChatBg:;
- (id)titleLibel;
- (void)updateEmojiBgWithChatHasBgImg:;
- (void)setTitleLibel:;
- (id)collectionView;
- (id)init;
- (id)delegate;
- (id)collectionView:cellForItemAtIndexPath:;
- (void)setCollectionView:;
- (void).cxx_destruct;
- (long long)collectionView:numberOfItemsInSection:;
- (void)setDelegate:;
+ (double)height;
@end
