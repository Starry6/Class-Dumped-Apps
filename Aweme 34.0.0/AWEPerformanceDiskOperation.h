@interface AWEPerformanceDiskOperation : NSObject
@property (nonatomic) @? cleanOperation;
@property (nonatomic) @? sizeOperation;
@property (nonatomic) @? downgradeOperation;
@property (nonatomic) NSString path;
- (id)cleanOperation;
- (void)setCleanOperation:;
- (id)initWithPath:cleanOperation:downgradeOperation:sizeOperation:;
- (id)sizeOperation;
- (id)downgradeOperation;
- (void)setDowngradeOperation:;
- (void)setSizeOperation:;
- (id)path;
- (void).cxx_destruct;
- (void)setPath:;
@end
