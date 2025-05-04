@interface AWETaskSpreadTaskWrapper : NSObject
@property (nonatomic) NSOperation task;
@property (nonatomic) @ info;
- (void)setTask:;
- (void)setInfo:;
- (id)info;
- (id)task;
- (void).cxx_destruct;
- (void)start;
+ (id)wrapperWithTask:info:;
+ (id)wrapperWithTask:;
@end
