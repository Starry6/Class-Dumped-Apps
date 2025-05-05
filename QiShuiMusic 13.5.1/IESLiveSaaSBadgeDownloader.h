@interface IESLiveSaaSBadgeDownloader : NSObject
- (void)p_downloadIconsWith:completion:;
- (BOOL)needLoadBadgesInBackWithUserModel:completion:;
- (BOOL)needLoadBadgesInBackWithUserModels:completion:;
- (BOOL)p_allExistInCache:;
- (BOOL)p_needLoadBadgesInBackWith:completion:;
- (BOOL)p_needLoadPBBadgesInBackWith:completion:;
@end
