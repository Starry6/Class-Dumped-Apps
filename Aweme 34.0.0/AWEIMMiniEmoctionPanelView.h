@interface AWEIMMiniEmoctionPanelView : UIView
@property (nonatomic) NSArray emoticonModels;
@property (nonatomic) double horizontalMargin;
@property (nonatomic) q imageScale;
@property (nonatomic) UICollectionView emoticonsBar;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) NSString enterMethod;
@property (nonatomic) NSString groupID;
@property (nonatomic) NSString conversationId;
@property (nonatomic) NSString chatType;
@property (nonatomic) NSString toUserId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) <AWECommentMiniEmoticonPanelViewDelegate> delegate;
@property (nonatomic) @? didClickEmoticonBlock;
@property (nonatomic) @? didClickQuickCommentBlock;
@property (nonatomic) @? fetchDataSource;
- (void)p_setupUI;
- (void)setEnterFrom:;
- (void)setEnterMethod:;
- (id)enterMethod;
- (id)enterFrom;
- (id)currentEmoticonsString;
- (id)getRemoteDataEmoticons;
- (id)didClickEmoticonBlock;
- (void)setDidClickEmoticonBlock:;
- (id)didClickQuickCommentBlock;
- (void)setDidClickQuickCommentBlock:;
- (void)resetEmoticonOrder;
- (BOOL)isUsedRemoteDataEmoticons;
- (id)chatType;
- (void)setChatType:;
- (id)toUserId;
- (void)setToUserId:;
- (id)getRemoteDataEmoticonsOfCount:;
- (id)defaultEmoticons;
- (void)p_setupImageScale;
- (void)p_layout;
- (id)emoticonModels;
- (id)emoticonsBar;
- (void)setEmoticonModels:;
- (void)p_setEmoticonView:withEmoticonModel:;
- (void)handleEmoticonTapedWithIndex:;
- (id)emoticonSize;
- (void)setEmoticonsBar:;
- (id)collectionView:layout:insetForSectionAtIndex:;
- (void)setGroupID:;
- (long long)imageScale;
- (void)setImageScale:;
- (id)init;
- (double)collectionView:layout:minimumLineSpacingForSectionAtIndex:;
- (id)delegate;
- (id)fetchDataSource;
- (id)groupID;
- (id)collectionView:cellForItemAtIndexPath:;
- (id)initWithFrame:;
- (void)collectionView:didSelectItemAtIndexPath:;
- (void).cxx_destruct;
- (long long)collectionView:numberOfItemsInSection:;
- (id)collectionView:layout:sizeForItemAtIndexPath:;
- (void)setDelegate:;
- (void)layoutSubviews;
- (void)setFetchDataSource:;
- (id)conversationId;
- (void)setConversationId:;
- (id)initWithFrame:context:;
- (double)horizontalMargin;
- (void)setHorizontalMargin:;
@end
