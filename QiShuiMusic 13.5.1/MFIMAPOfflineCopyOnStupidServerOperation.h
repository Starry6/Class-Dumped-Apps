@interface MFIMAPOfflineCopyOnStupidServerOperation : MFIMAPOperation
- (void)dealloc;
- (unsigned int)approximateSize;
- (unsigned char)_magic;
- (void)expungeTemporaryUid:;
- (id)_deserializeOpSpecificValuesFromData:cursor:;
- (void)serializeIntoData:;
- (BOOL)getMessageId:andInternalDate:forDestinationUid:;
- (void)setMessageId:andInternalDate:forMessageWithSourceUid:;
@end
