@interface AWEInTodayPhotoLibraryAggregateHelper : NSObject
+ (void)pastMemoryAssetsFromPhotoLibraryWithDate:completion:;
+ (void)pastMonthAssetsFromPhotoLibraryWithDate:completion:;
+ (id)weekFirstDayWithDate:;
+ (void)pastYearAssetsWithFilter:completion:;
+ (id)weekLastDayWithDate:;
+ (BOOL)assetFilterWithAsset:;
+ (id)validRangeListWithConfig:;
+ (id)generateFetchOptionsPredicateWithRange:isFetchImage:isFetchVideo:;
+ (id)inTodayBDTokenCert;
+ (id)fetchAssetsWithAssetIds:options:error:;
+ (id)pastYearTodayKeyWithDate:prefix:;
+ (id)pastYearWeekKeyWithDate:prefix:;
+ (id)pastYearMonthKeyWithDate:prefix:;
+ (void)pastDayAssetsFromPhotoLibraryWithDate:completion:;
+ (void)pastWeekAssetsFromPhotoLibraryWithDate:completion:;
+ (void)pastRangeAssetsFromPhotoLibraryWithRangeList:completion:;
+ (void)fetchAssetsWithConfig:completion:;
+ (id)imSkylightConfigWithAlbum:;
+ (long long)dateValue:;
@end
