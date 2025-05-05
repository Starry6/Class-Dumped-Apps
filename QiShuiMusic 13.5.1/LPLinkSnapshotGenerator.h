@interface LPLinkSnapshotGenerator : NSObject
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)snapshotForMetadata:configurations:completionHandler:;
@end
