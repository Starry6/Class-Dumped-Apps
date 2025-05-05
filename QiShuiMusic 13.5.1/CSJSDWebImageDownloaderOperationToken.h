@interface CSJSDWebImageDownloaderOperationToken : NSObject
@property (nonatomic) @? completedBlock;
@property (nonatomic) @? progressBlock;
@property (nonatomic) NSDictionary decodeOptions;
- (id)completedBlock;
- (id)decodeOptions;
- (void)setCompletedBlock:;
- (void)setDecodeOptions:;
- (id)progressBlock;
- (void)setProgressBlock:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
@end
