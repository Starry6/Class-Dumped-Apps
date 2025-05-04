@interface AWEKnowledgeRichContentImpl.RichFullPageSwiftServiceImpl : HTSService
- (id)filterUnavailableIDForUserPage:originItemID:;
- (long long)getConsumedCommentCountWithModel:scene:;
- (BOOL)isAwemeNote:;
- (long long)fullPageInitMuteState;
- (BOOL)shouldShowAlbumIcon:;
- (id)getCommonAlbumDetailPayload:enterFrom:logExtraDict:;
- (id)createAlbumDetailViewController:referString:enterFrom:logExtraDict:;
- (id)createNewAlbumDetailViewController:enterFrom:logExtraDict:;
- (id)createNewAlbumDetailViewController:;
- (id)fullPageRecommendViewControllerWithContext:config:;
- (id)init;
@end
