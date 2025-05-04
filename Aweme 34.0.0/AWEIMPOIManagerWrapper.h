@interface AWEIMPOIManagerWrapper : NSObject
@property (nonatomic) FBKVOController searchKVO;
@property (nonatomic) NSError searchError;
@property (nonatomic) <AWEPOISearchLocationDataManagerProtocol> searchPOIDataManger;
@property (nonatomic) <AWEIMPoiManagerWrapperDelegate> delegate;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) {CLLocationCoordinate2D=dd} currentCoordinate;
@property (nonatomic) BOOL isSearching;
- (void)searchMore;
- (void)cancelAllSearchRequests;
- (void)setSearchKVO:;
- (id)searchPOIDataManger;
- (id)currentCoordinate;
- (void)updateUserCityCode:city:;
- (id)locationStringWithcoordinate:;
- (id)searchKVO;
- (void)setSearchPOIDataManger:;
- (id)init;
- (id)delegate;
- (BOOL)isSearching;
- (BOOL)hasMore;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)setIsSearching:;
- (void)setSearchError:;
- (id)searchError;
@end
