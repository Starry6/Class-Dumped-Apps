@interface MFFetchResponseQueue : MFBufferedQueue
- (BOOL)addItem:;
- (id)init;
- (void).cxx_destruct;
- (BOOL)handleItems:;
- (BOOL)shouldAddUID:;
- (id)messageToSyncFlagsForUID:;
- (id)insertMessages:;
@end
