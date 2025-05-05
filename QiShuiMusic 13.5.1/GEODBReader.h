@interface GEODBReader : NSObject
@property (nonatomic) BOOL closed;
- (void)setClosed:;
- (void)dealloc;
- (void)_openDB;
- (void)setExpirationRecords:count:;
- (void).cxx_destruct;
- (id)initWithPath:;
- (void)_closeDB;
- (BOOL)closed;
- (void)_databaseReset:;
- (void)_editionUpdateBegin:;
- (void)_editionUpdateEnd:;
- (id)initWithPath:pragmaOverrides:;
- (id)_dataForA:andB:andC:andD:isCurrent:eTag:;
- (id)_dataForKey:isCurrent:eTag:;
- (id)dataForKey:isCurrent:eTag:;
- (void)dataForKeys:callbackQueue:asyncHandler:;
@end
