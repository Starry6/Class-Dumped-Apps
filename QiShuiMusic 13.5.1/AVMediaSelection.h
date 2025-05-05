@interface AVMediaSelection : NSObject
@property (nonatomic) AVAsset asset;
- (id)propertyList;
- (id)_internal;
- (void)dealloc;
- (id)asset;
- (void)_loadiVarsIfNeeded;
- (id)selectedMediaOptionInMediaSelectionGroup:;
- (id)_groupDictionaries;
- (unsigned long long)hash;
- (id)_selectedMediaArray;
- (id)_dictionaryGroupsWithSelectedOption;
- (id)_initWithAssetWithoutGroupDictionaries:;
- (void)_createDefaultMediaSelectionOptions;
- (id)description;
- (id)_initWithAsset:selectedMediaArray:;
- (id)initWithAsset:propertyList:;
- (id)_propertyListForSelectedMediaOptionInMediaSelectionGroup:;
- (id)mutableCopyWithZone:;
- (id)_initWithAsset:;
- (id)_initWithDeferredLoadingOfAsset:selectedMediaArray:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)mediaSelectionCriteriaCanBeAppliedAutomaticallyToMediaSelectionGroup:;
@end
