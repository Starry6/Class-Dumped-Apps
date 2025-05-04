@interface AWEMusicCommonGuideStoreService : NSObject
@property (nonatomic) NSString key;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)canShowCollectionGuide;
- (void)userPlayingInBack;
- (BOOL)canShowBgGuide;
- (Class)guidePopupViewClass;
- (void)bgGuideDidShow;
- (id)bgGuideTutorialType;
- (void)collectionGuideDidShow;
- (BOOL)canShowGotoMyCollectionGuide;
- (void)gotoMyCollectionGuideDidShow;
- (BOOL)canShowChangeSongGuide;
- (void)changeSongGuideDidShow;
- (void)setKey:;
- (id)key;
- (void).cxx_destruct;
- (id)initWithKey:;
@end
