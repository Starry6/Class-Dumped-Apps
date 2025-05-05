@interface IESLiveBadgeDownloader : NSObject
- (void)p_downloadIconsWith:completion:;
- (BOOL)needLoadBadgesInBackWithImages:completion:;
- (BOOL)needLoadBadgesInBackWithUserModel:completion:;
- (BOOL)needLoadBadgesInBackWithUserModels:completion:;
- (BOOL)p_allExistInCache:;
- (BOOL)p_needLoadBadgesInBackWith:completion:;
@end
