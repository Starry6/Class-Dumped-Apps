@interface AVChapterMetadataItem : AVMetadataItem
- (id)startDate;
- (id)init;
- (id)extendedLanguageTag;
- (void)dealloc;
- (id)time;
- (id)languageCode;
- (id)extraAttributes;
- (id)keySpace;
- (void)_addFigAssetNotifications;
- (id)key;
- (id)locale;
- (id)dataType;
- (void)cancelLoading;
- (void)loadValuesAsynchronouslyForKeys:completionHandler:;
- (void)_removeFigAssetNotifications;
- (long long)statusOfValueForKey:error:;
- (id)description;
- (id)value;
- (id)mutableCopyWithZone:;
- (id)duration;
- (id)copyWithZone:;
- (id)commonKey;
- (BOOL)_valueForKeyDependsOnMetadataValue:;
- (long long)_valueStatus;
- (id)_initWithAsset:chapterGroupIndex:chapterIndex:chapterType:extendedLanguageTag:languageCode:chapterDataType:time:duration:;
- (void)_takeValueFrom:;
- (long long)_chapterGroupIndex;
- (long long)_chapterIndex;
- (void)_setValueStatus:figErrorCode:;
- (void)_ensureValueLoadedSync;
@end
