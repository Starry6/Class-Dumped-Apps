@interface AVAssetMediaSelectionGroup : AVMediaSelectionGroup
- (id)dictionary;
- (id)init;
- (void)dealloc;
- (id)asset;
- (id)_optionWithID:identifier:source:displaysNonForcedSubtitles:;
- (unsigned long long)hash;
- (id)_groupMediaCharacteristics;
- (id)defaultOption;
- (id)options;
- (id)_optionWithID:displaysNonForcedSubtitles:;
- (id)mediaSelectionOptionWithPropertyList:;
- (id)initWithAsset:dictionary:;
- (BOOL)isEqual:;
- (BOOL)_isStreamingGroup;
@end
