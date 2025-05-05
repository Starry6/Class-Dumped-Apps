@interface AVMDLCopyOperation : NSObject
@property (nonatomic) NSString destPath;
@property (nonatomic) NSString fileKey;
@property (nonatomic) BOOL waitIfCaching;
@property (nonatomic) @? completionBlock;
@property (nonatomic) BOOL forceCopy;
@property (nonatomic) @? infoBlock;
- (id)fileKey;
- (id)destPath;
- (BOOL)forceCopy;
- (id)infoBlock;
- (id)initWithKey:destPath:completionBlock:;
- (id)initWithKey:destPath:waitIfCaching:completionBlock:;
- (void)setDestPath:;
- (void)setFileKey:;
- (void)setForceCopy:;
- (void)setInfoBlock:;
- (void)setWaitIfCaching:;
- (BOOL)waitIfCaching;
- (void)setCompletionBlock:;
- (void).cxx_destruct;
- (id)completionBlock;
@end
