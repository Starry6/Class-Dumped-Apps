@interface QLUTIManager : NSObject
+ (id)valueInTypeKeyedDictionary:forType:;
+ (id)findAndStoreValueInTypeKeyedDictionary:forType:withDescription:withQueue:validationBlock:;
+ (id)_searchParentTypesFor:fromDictionary:alreadySeenUTIs:matchedValueToTypeBlock:validationBlock:;
+ (id)_recursiveValueInDictionary:forType:alreadySeenUTIs:matchedValueToTypeBlock:validationBlock:;
+ (id)_preferredParentUTIof:fromParents:;
+ (id)_selectParentUTIForUTI:fromParentUTIs:dictionary:alreadySeenUTIs:matchedValueToTypeBlock:validationBlock:;
+ (id)claimedLivePhotoTypes;
+ (id)claimedContactTypes;
+ (id)claimedCalendarTypes;
+ (id)claimedTextTypes;
+ (id)claimedPDFTypes;
+ (id)claimedImageTypes;
+ (id)claimedAVTypes;
+ (id)claimedOfficeTypes;
+ (id)claimediWorkTypes;
+ (id)claimedCSVTypes;
+ (id)claimedWebViewTypes;
+ (id)internallyClaimedTypes;
+ (id)textGeneratorSupportedTypes;
+ (id)typesForWhichExternalGeneratorsArePreferred;
+ (id)screentimeiWorkBundleForUTI:;
@end
