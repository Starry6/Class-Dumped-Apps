@interface BRQueryStitch : NSObject
@property (nonatomic) NSURL fromURL;
@property (nonatomic) NSArray contexts;
- (void)setQueries:;
- (void)dealloc;
- (id)contexts;
- (void)setContexts:;
- (void).cxx_destruct;
- (id)description;
- (void)done;
- (id)initWithURL:objid:kind:;
- (void)_enableUpdatesFromIPCAfterStitchingOnAllQueries;
- (void)_creationDone;
- (void)_renameDone;
- (void)_deletionDone;
- (id)fromURL;
- (void)setFromURL:;
@end
