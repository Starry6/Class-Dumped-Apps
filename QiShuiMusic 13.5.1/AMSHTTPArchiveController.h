@interface AMSHTTPArchiveController : NSObject
+ (BOOL)_shouldAddRequest:;
+ (id)_harURLFilters;
+ (BOOL)_disabled;
+ (id)harURLFilters;
+ (BOOL)isRemoveDisabled;
+ (void)addHTTPArchive:;
+ (void)_updateHarFileFilters;
+ (void)setRemoveDisabled:;
+ (id)maxBufferSizeOverride;
+ (void)setMaxBufferSizeOverride:;
@end
