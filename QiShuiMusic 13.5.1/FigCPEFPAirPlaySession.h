@interface FigCPEFPAirPlaySession : NSObject
- (void)dealloc;
- (void)endSession;
- (id)initWithFairPlayContext:protectionInfo:routeInfo:playbackSession:mediaControlUUID:;
- (id)initWithFairPlayContext:contentInfo:routeInfo:playbackSession:mediaControlUUID:;
- (id)initWithFairPlayContext:routeInfo:playbackSession:mediaControlUUID:;
- (id)createPicRequestWithError:;
- (id)sicWithPic:;
- (id)mediaControlParamsWithStoreResponse:;
- (id)legacySinfs;
- (void)authorizeItemCompletionHandler_objc:picData:playerGUID:error:;
- (void)beginSessionWithCompletionQueue:completionHandler:;
@end
