@interface AWEECTrendGoodsEntranceManager : NSObject
@property (nonatomic) NSMutableSet awemeIDBottomBarTappedSet;
@property (nonatomic) NSMutableSet awemeIDTopBarShowedSet;
- (void)removeCommentTopBarShowedWithAwemeID:;
- (BOOL)getCommentTopBarShowedWithAwemeID:;
- (void)setVideoBottomBarTappedWithAwemeID:;
- (BOOL)getVideoBottomBarTappedWithAwemeID:;
- (void)setCommentTopBarShowedWithAwemeID:;
- (id)awemeIDBottomBarTappedSet;
- (id)awemeIDTopBarShowedSet;
- (void)setAwemeIDBottomBarTappedSet:;
- (void)setAwemeIDTopBarShowedSet:;
- (void).cxx_destruct;
+ (id)shared;
@end
