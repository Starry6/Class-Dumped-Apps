@interface SAThreadCallTree : SACallTree
@property (nonatomic) SAThread thread;
@property (nonatomic) SADispatchQueue dispatchQueue;
@property (nonatomic) SASwiftTask swiftTask;
- (id)thread;
- (id)dispatchQueue;
- (void).cxx_destruct;
- (id)swiftTask;
@end
