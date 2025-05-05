@interface BRShareOperation : BROperation
@property (nonatomic) NSURL url;
- (id)remoteObject;
- (id)url;
- (id)init;
- (id)initWithURL:;
- (void)setUrl:;
- (void).cxx_destruct;
- (id)remoteFPFSObject;
- (id)remoteLegacyObject;
- (id)initWithShare:;
- (id)initWithDirectConnection;
@end
