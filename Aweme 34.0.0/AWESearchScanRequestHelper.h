@interface AWESearchScanRequestHelper : NSObject
@property (nonatomic) @? completionBlock;
@property (nonatomic) CSPChunkRequestManager chunkManager;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didReceiveJSON:;
- (void)chunkRequestDidEndWithCommonResponse:withError:forceCanceled:;
- (void)requestSearchScanWithImage:params:completionBlock:;
- (void)setChunkManager:;
- (void)dealloc;
- (void)setCompletionBlock:;
- (id)completionBlock;
- (void).cxx_destruct;
- (id)chunkManager;
+ (id)sharedInstance;
@end
