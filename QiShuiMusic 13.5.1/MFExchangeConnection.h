@interface MFExchangeConnection : MFIMAPConnection
- (id)_fetchArgumentForMessageUidsAndFlags;
- (id)_fetchArgumentForMessageSkeletonsWithAllHeaders;
- (BOOL)_isFetchResponseValid:;
@end
