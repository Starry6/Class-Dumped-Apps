@interface CalCFPreferencesStore : NSObject
- (BOOL)getBoolean:forDomain:key:;
- (void)setValue:forDomain:key:;
- (BOOL)getInteger:forDomain:key:;
- (BOOL)getValue:forDomain:key:;
- (void)synchronizeDomain:;
+ (id)shared;
@end
