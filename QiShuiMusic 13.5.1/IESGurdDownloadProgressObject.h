@interface IESGurdDownloadProgressObject : NSObject
@property (nonatomic) NSProgress progress;
@property (nonatomic) NSMutableArray progressBlocks;
- (void)addProgressBlock:;
- (void)setProgressBlocks:;
- (void)startObservingWithProgress:;
- (void)dealloc;
- (void)setProgress:;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (id)progress;
- (void).cxx_destruct;
- (id)progressBlocks;
+ (id)object;
@end
