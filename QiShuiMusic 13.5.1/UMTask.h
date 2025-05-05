@interface UMTask : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) NSString reason;
@property (nonatomic) NSString bundleID;
@property (nonatomic) NSInteger pid;
@property (nonatomic) BOOL isFinished;
@property (nonatomic) NSUUID uuid;
- (void)end;
- (id)init;
- (void)setName:;
- (id)uuid;
- (void)setUuid:;
- (id)reason;
- (void)setReason:;
- (BOOL)isFinished;
- (int)pid;
- (void).cxx_destruct;
- (id)description;
- (id)name;
- (void)begin;
- (id)bundleID;
- (void)setPid:;
- (void)setBundleID:;
- (void)setIsFinished:;
+ (id)taskWithName:reason:;
+ (id)taskWithName:reason:forBundleID:;
@end
