@interface MFSearchFetchResponseQueue : MFFetchResponseQueue
- (id)init;
- (BOOL)shouldAddUID:;
- (id)messageToSyncFlagsForUID:;
@end
