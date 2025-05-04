@interface AWEYAPAPICallBack : NSObject
@property (nonatomic) @? callback;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)callState:fromScene:;
- (void)onResponse:;
- (void)setCallback:;
- (id)callback;
- (void).cxx_destruct;
- (id)initWithCallBack:;
@end
