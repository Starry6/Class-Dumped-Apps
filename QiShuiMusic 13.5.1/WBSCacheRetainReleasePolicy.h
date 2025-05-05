@interface WBSCacheRetainReleasePolicy : NSObject
@property (nonatomic) NSSet retainedKeyStrings;
- (void).cxx_destruct;
- (id)initWithPurgeBlock:;
- (void)retainEntryForKeyString:;
- (void)retainEntriesForKeyStrings:;
- (void)retainEntryWithKeyStringProvider:;
- (void)_retainEntryForKeyString:;
- (void)releaseEntryForKeyString:;
- (void)releaseEntriesForKeyStrings:;
- (void)releaseEntryWithKeyStringProvider:;
- (void)_releaseEntryForKeyString:;
- (BOOL)isEntryRetainedForKeyString:;
- (id)retainedKeyStrings;
@end
