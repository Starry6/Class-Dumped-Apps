@interface IPAPendingAutoSettings : IPAAutoSettings
- (BOOL)pending;
- (BOOL)_applyArchiveDictionary:;
- (void)_archiveIntoDictionary:;
@end
