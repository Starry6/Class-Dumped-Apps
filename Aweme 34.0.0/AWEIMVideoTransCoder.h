@interface AWEIMVideoTransCoder : NSObject
@property (nonatomic) NSOperationQueue transcodeQueue;
- (void)cancelPreTransOperationWithAssetIdentifier:;
- (id)transcodeWithContext:;
- (BOOL)checkOperationExecutingWithMessageId:;
- (void)makeOperationFinishWithMessageId:;
- (void)cancelOperationWithMessageId:;
- (id)transcodeQueue;
- (void)setTranscodeQueue:;
- (id)init;
- (void).cxx_destruct;
@end
