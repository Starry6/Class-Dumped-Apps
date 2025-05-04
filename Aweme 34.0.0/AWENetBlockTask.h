@interface AWENetBlockTask : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) @? action;
@property (nonatomic) q type;
@property (nonatomic) BOOL depandOnEnqueueThread;
@property (nonatomic) BOOL runInMainThread;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithAction:type:name:;
- (BOOL)depandOnEnqueueThread;
- (BOOL)runInMainThread;
- (void)setRunInMainThread:;
- (void)run;
- (void)setAction:;
- (long long)type;
- (id)action;
- (void)setType:;
- (void).cxx_destruct;
- (void)setName:;
- (id)name;
+ (id)taskWithAction:type:name:;
@end
