@interface AWECompileRequest : NSObject
@property (nonatomic) q type;
@property (nonatomic) BOOL executing;
@property (nonatomic) BOOL finished;
@property (nonatomic) @? block;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)onCompilerAvailable;
- (void)onUserRemoval;
- (void)setFinished:;
- (BOOL)isExecuting;
- (id)block;
- (long long)type;
- (void)setBlock:;
- (void)setType:;
- (BOOL)isFinished;
- (void).cxx_destruct;
- (void)setExecuting:;
@end
