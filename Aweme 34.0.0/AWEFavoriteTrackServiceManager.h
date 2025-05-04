@interface AWEFavoriteTrackServiceManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)favoriteTypeToTrackName:;
- (void)trackFolderDetailItemShow:session:itemIndex:;
- (void)trackFavoriteSnackBarShowDurationWithHasCache:durationTime:;
- (void)trackFavoriteSecondTabShow:enterFrom:isRedDotShow:extraParams:;
- (void)trackFavoriteSecondTabShow:enterFrom:isRedDotShow:;
- (void)trackFolderItemShowWithContext:;
- (void)trackFolderItemClickWithContext:;
- (void)trackFavoriteSnackBarAndAddToFilePopupShow:authorId:groupId:folderCnt:toastType:;
- (void)trackFavoriteSnackBarAndAddToFilePopupClick:authorId:groupId:clickPosition:;
- (void)trackCreateNewFavoriteFolderClick:;
- (void)trackAwemeColumnStyleChange:toStatus:;
+ (id)sharedInstance;
@end
