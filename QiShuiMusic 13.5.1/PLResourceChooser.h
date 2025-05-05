@interface PLResourceChooser : NSObject
- (id)init;
+ (id)_chooseFileReservationForLargeDisplayableImageFileForAsset:format:forceLarge:allowMetadataSnapshot:outFilePath:outImageType:;
+ (id)fileReservationForLargeDisplayableImageFileForAsset:format:allowMetadataSnapshot:forceLarge:outFilePath:outImageType:;
+ (id)fileReservationForImageFileForAsset:format:outFilePath:outImageType:;
+ (id)_originalItemFromAllItems:;
+ (id)_penultimateItemFromAllItems:;
+ (id)_filteredArrayUsingPredicate:originalItems:nonMatchingItems:;
+ (id)_itemMatchingFormat:allItems:acceptableSortedAlternatives:;
+ (void)_chooseCloudResourceTypeForFormat:asset:optimalCPLResourceType:localCPLResourceType:localCPLResourceFilePath:fileReservation:;
+ (long long)_fileResourceTypeForCloudResourceType:hasAdjustments:requiresUnadjustedVersion:;
+ (unsigned long long)cloudResourceTypeForAsset:format:filePath:imageType:;
@end
