@interface IESECLiveScheduler : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) NSString category;
@property (nonatomic) @? action;
- (id)initWithName:category:action:;
- (BOOL)invokeWithParams:;
- (id)action;
- (void).cxx_destruct;
- (id)name;
- (id)category;
@end
