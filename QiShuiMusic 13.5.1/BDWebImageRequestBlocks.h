@interface BDWebImageRequestBlocks : NSObject
@property (nonatomic) @? progressBlock;
@property (nonatomic) @? completedBlock;
@property (nonatomic) @? decryptBlock;
- (id)completedBlock;
- (id)decryptBlock;
- (void)setCompletedBlock:;
- (void)setDecryptBlock:;
- (id)progressBlock;
- (void)setProgressBlock:;
- (void).cxx_destruct;
@end
