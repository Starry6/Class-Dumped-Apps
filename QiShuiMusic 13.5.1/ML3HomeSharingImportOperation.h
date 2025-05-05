@interface ML3HomeSharingImportOperation : ML3DAAPImportOperation
- (void)main;
- (unsigned long long)importSource;
- (id)importItemFromDAAPElement:;
- (id)containerImportItemFromDAAPElement:withTrackIds:trackPersonIdentifiers:;
- (void)updateImportProgress:;
- (BOOL)_performHomeSharingImportWithTransaction:;
@end
