@interface CNTask : NSObject
@property (nonatomic) BOOL cancelled;
@property (nonatomic) NSString name;
- (id)recover:;
- (id)run:;
- (id)init;
- (BOOL)cancel;
- (id)map:;
- (void)setName:;
- (BOOL)isCancelled;
- (id)initWithName:;
- (id)run;
- (void).cxx_destruct;
- (id)description;
- (id)name;
- (id)flatMap:;
- (id)profileWithTimeProvider:os_log:;
+ (id)taskWithBlock:;
+ (id)taskWithName:block:;
+ (id)taskWithName:subtasks:;
+ (id)taskWithResult:;
+ (id)taskWithName:result:;
+ (id)taskWithError:;
+ (id)taskWithName:error:;
@end
