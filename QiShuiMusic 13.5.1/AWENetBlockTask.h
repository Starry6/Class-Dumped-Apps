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
- (BOOL)runInMainThread;
- (BOOL)depandOnEnqueueThread;
- (id)initWithAction:type:name:;
- (void)setRunInMainThread:;
- (void)setName:;
- (void)setType:;
- (id)action;
- (void)run;
- (void)setAction:;
- (long long)type;
- (void).cxx_destruct;
- (id)name;
+ (id)taskWithAction:type:name:;
@end
