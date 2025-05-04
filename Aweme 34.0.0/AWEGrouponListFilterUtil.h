@interface AWEGrouponListFilterUtil : NSObject
+ (BOOL)containsHalfScreenWithDataList:;
+ (id)filterCacheTransformerList:;
+ (id)feedListFromDataList:;
+ (id)transformerListFromDataList:;
+ (BOOL)containsExposeCardWithDataList:;
+ (BOOL)containsCornerMarkWithDataList:;
+ (id)transformerListFromDataList:filterCardType:;
+ (id)transformerListFromDataList:targetCardType:filterDataWithKey:;
+ (BOOL)__containsExposeDataWithCardData:;
+ (BOOL)__containsHalfScreenDataWithCradData:;
+ (BOOL)__containsCornerMarkDataWithCradData:;
+ (id)transformerCardTypesWithDataList:;
+ (id)feedCardTypesWithDataList:;
@end
