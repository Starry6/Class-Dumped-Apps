@interface CUState : NSObject
@property (nonatomic) @? eventHandler;
@property (nonatomic) NSString name;
- (void)dealloc;
- (void)setEventHandler:;
- (id)eventHandler;
- (void).cxx_destruct;
- (id)initWithName:parent:;
- (id)description;
- (id)name;
- (void)invalidate;
@end
