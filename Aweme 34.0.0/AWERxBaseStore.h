@interface AWERxBaseStore : NSObject
@property (nonatomic) AWERxModule module;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)dispatchAction:completion:;
- (BOOL)setState:withValue:context:;
- (BOOL)dispatchAction:;
- (BOOL)setState:withValue:;
- (void).cxx_destruct;
- (id)module;
- (id)initWithModule:;
@end
