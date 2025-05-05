@interface IXOwnedDataPromise : IXDataPromise
@property (nonatomic) IXOwnedDataPromiseSeed seed;
@property (nonatomic) NSString targetLastPathComponent;
@property (nonatomic) NSURL stagedPath;
@property (nonatomic) NSURL stagingBaseDir;
- (void).cxx_destruct;
- (Class)seedClass;
- (id)stagingBaseDir;
- (id)stagedPath;
- (void)setStagedPath:;
- (BOOL)setTargetLastPathComponent:error:;
- (id)targetLastPathComponentWithError:;
- (id)targetLastPathComponent;
- (void)setTargetLastPathComponent:;
@end
