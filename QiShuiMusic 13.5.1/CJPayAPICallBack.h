@interface CJPayAPICallBack : NSObject
@property (nonatomic) @? callback;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)callState:fromScene:;
- (void)onResponse:;
- (id)callback;
- (void)setCallback:;
- (void).cxx_destruct;
- (id)initWithCallBack:;
@end
