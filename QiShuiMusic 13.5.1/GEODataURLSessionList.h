@interface GEODataURLSessionList : NSObject
@property (nonatomic) Q count;
- (id)init;
- (id)urlSessionForIdentifier:;
- (void)URLSession:didBecomeInvalidWithError:;
- (void).cxx_destruct;
- (void)pruneSessionsNotInIdentifierArray:agressive:;
- (id)urlSessionForRequest:;
- (void)addSession:;
- (unsigned long long)count;
- (void)finishTasksAndInvalidateSessionsMatching:group:;
@end
