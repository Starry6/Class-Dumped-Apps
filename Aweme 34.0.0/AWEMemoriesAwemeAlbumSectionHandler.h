@interface AWEMemoriesAwemeAlbumSectionHandler : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (BOOL)shouldResponseWithMemoriesPlayerModel:;
+ (id)createSectionViewModelWithMemoriesPlayerTileModels:;
+ (id)createSectionTileModelsWithMemoriesPlayerModel:;
@end
