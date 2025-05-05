@interface MPNondurableMediaItem : MPMediaItem
- (void)setValue:forKey:;
- (id)mediaLibrary;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)valueForProperty:;
- (unsigned long long)persistentID;
- (id)initWithPersistentID:;
- (BOOL)existsInLibrary;
- (id)valuesForProperties:;
- (BOOL)didSkipWithPlayedToTime:;
- (void)incrementPlayCount;
- (void)markNominalAmountHasBeenPlayed;
- (void)noteWasPlayedToTime:skipped:;
- (void)incrementSkipCount;
- (void)incrementPlayCountForPlayingToEnd;
- (BOOL)incrementPlayCountForStopTime:;
- (void)updateDateAccessedToCurrentDateWithWriteCompletionBlock:;
- (double)nominalHasBeenPlayedThreshold;
- (BOOL)isUsableAsRepresentativeItem;
- (void)enumerateValuesForProperties:usingBlock:;
+ (id)defaultPropertyValues;
+ (BOOL)supportsSecureCoding;
+ (BOOL)canFilterByProperty:;
@end
