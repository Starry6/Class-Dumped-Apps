@interface CNPhotoPickerProviderSuggestionsGroup : CNPhotoPickerProviderGroup
- (void).cxx_destruct;
- (void)providerItemDidUpdate:;
- (id)itemsForProviderIdentifier:;
- (void)prepareDisplayItems:;
- (id)addItems;
- (long long)addProviderItem:;
- (long long)removeProviderItem:;
- (void)setAddItems:;
- (id)initWithProviders:environment:allowAddItem:;
- (id)providerOfClass:;
- (long long)indexForDefaultMonogram;
- (id)dedupedSuggestionItemsGroupedByProvider;
- (void)loadAvailablePaddingItems;
- (id)providerItems:withMaxRecentsAndMonogramsCount:;
- (id)paddedDisplayItems:;
- (unsigned long long)maxRecentsAndMonogramsCount;
- (id)defaultMonogramItem;
- (void)reloadMonogramProviderGroupWithVisualIdentity:size:RTL:;
@end
