@interface AWEMediaTemplatesFetchImpl : NSObject
@property (nonatomic) Q fetchCountPerRequest;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)commonParams;
- (void)favoriteMediaTemplateWithID:completion:;
- (void)unFavoriteMediaTemplateWithID:completion:;
- (unsigned long long)fetchCountPerRequest;
- (void)fetchMediaTemplatesCategories:;
- (void)refreshMediaTemplatesWithCategory:completion:;
- (void)loadmoreMediaTemplatesWithCategory:cursor:completion:;
- (void)refreshFavoriteMediaTemplatesCompletion:;
- (void)loadmoreFavoriteMediaTemplatesWithCursor:completion:;
- (void)fetchMediaTemplateWithID:completion:;
- (void)fetchMediaTemplateWithID:type:completion:;
- (void).cxx_destruct;
+ (BOOL)needCommonParams;
@end
