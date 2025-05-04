@interface AWERLUpdateRequest : NSObject
@property (nonatomic) AWERLComponent2 sender;
@property (nonatomic) <AWERLAnimationProtocol> animation;
@property (nonatomic) @? callback;
@property (nonatomic) @? event;
@property (nonatomic) BOOL fullUpdate;
- (void)setFullUpdate:;
- (BOOL)fullUpdate;
- (void)setCallback:;
- (id)callback;
- (id)sender;
- (void)setSender:;
- (void)setEvent:;
- (void).cxx_destruct;
- (id)animation;
- (void)setAnimation:;
- (id)event;
@end
