@interface BDImageBMFSRStorage : NSObject
@property (nonatomic) BmfSuperResolution srProcess;
@property (nonatomic) NSInteger scaleMode;
- (void)setSrProcess:;
- (id)srProcess;
- (void).cxx_destruct;
- (void)setScaleMode:;
- (int)scaleMode;
@end
