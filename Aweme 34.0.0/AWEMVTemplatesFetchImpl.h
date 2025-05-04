@interface AWEMVTemplatesFetchImpl : NSObject
@property (nonatomic) NSString classicMvPannel;
@property (nonatomic) Q fetchCountPerRequest;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)fetchMVTemplatesCategoriesWithExtraParams:completion:;
- (void)refreshMergedMVTemplatesWithCategory:extraParams:completion:;
- (void)loadmoreMergedMVTemplatesWithCategory:cursor:sortedPosition:completion:;
- (void)loadmoreMergedMVTemplatesWithCategory:extraParams:cursor:sortedPosition:completion:;
- (void)refreshMergedFavoriteMVTemplatesCompletion:;
- (void)loadmoreMergedFavoriteMVTemplatesWithCursor:longCursor:sortedPosition:completion:;
- (void)getClassicalMVFavoriteStateWithTemplateIDs:simplify:completion:;
- (void)fetchTemplateWithTemplateId:templateType:templateSource:simplify:completion:;
- (void)fetchTemplateWithTemplateId:templateType:simplify:completion:;
- (void)favoriteMVTemplateWithID:templateType:completion:;
- (void)unFavoriteMVTemplateWithID:templateType:completion:;
- (void)changeFavoriteXiangSuWithEffectIDs:favorite:completionHandler:;
- (void)changeFavoriteXiangSuWithEffectIDs:type:favorite:completionHandler:;
- (id)classicMvPannel;
- (unsigned long long)fetchCountPerRequest;
- (id)commonRequestModel;
- (void)p_preProcessEffects:;
- (void).cxx_destruct;
+ (void)fetchCutSameTemplateWithID:templateSource:completion:;
+ (void)counterCutsameTemplate:;
+ (BOOL)p_needFetchNLETemplateURLForVersion:;
@end
