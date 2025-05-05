@interface AVFigAssetWriterFinishWritingAsyncOperation : AVOperation
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)cancel;
- (void)didReceiveFigAssetWriterNotificationWithSuccess:error:;
- (void)dealloc;
- (void)start;
- (BOOL)isAsynchronous;
- (void)didEnterTerminalState;
- (id)initWithFigAssetWriter:;
@end
