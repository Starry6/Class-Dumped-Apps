@interface BMStreamDatastoreWriter : NSObject
@property (nonatomic) BOOL canReadOrPruneData;
- (id)streamIdentifier;
- (BOOL)writeEventWithEventBody:;
- (id)initWithStream:config:;
- (BOOL)writeEventWithEventBody:timestamp:;
- (Class)eventBodyClass;
- (BOOL)canReadOrPruneData;
- (void)syncMappedFiles;
- (void).cxx_destruct;
- (BOOL)_writeEventData:dataVersion:timestamp:outBookmark:;
- (BOOL)writeEventBodyClass:;
@end
