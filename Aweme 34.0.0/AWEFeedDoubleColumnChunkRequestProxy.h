@interface AWEFeedDoubleColumnChunkRequestProxy : NSObject
@property (nonatomic) BOOL alreadyReceiveData;
@property (nonatomic) CSPChunkRequestManager chunkRequestManager;
@property (nonatomic) @? receiveDataBlock;
@property (nonatomic) @? chunkFinishBlock;
@property (nonatomic) @? pbFinishBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)chunkRequestDidEndWithCommonResponse:withError:forceCanceled:;
- (void)didReceiveRawData:;
- (BOOL)alreadyReceiveData;
- (id)receiveDataBlock;
- (id)chunkFinishBlock;
- (id)pbFinishBlock;
- (id)chunkRequestManager;
- (void)setAlreadyReceiveData:;
- (void)setReceiveDataBlock:;
- (void)setChunkFinishBlock:;
- (void)setChunkRequestManager:;
- (void)setPbFinishBlock:;
- (void).cxx_destruct;
- (void)reset;
- (void)cancelRequest;
@end
