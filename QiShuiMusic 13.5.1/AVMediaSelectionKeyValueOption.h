@interface AVMediaSelectionKeyValueOption : AVMediaSelectionOption
- (id)mediaType;
- (id)dictionary;
- (id)metadataForFormat:;
- (id)commonMetadata;
- (void)dealloc;
- (id)initWithAsset:group:dictionary:;
- (BOOL)isPlayable;
- (id)availableMetadataFormats;
- (id)locale;
- (unsigned long long)hash;
- (id)group;
- (id)_groupID;
- (BOOL)isEqual:;
- (id)_groupMediaType;
@end
