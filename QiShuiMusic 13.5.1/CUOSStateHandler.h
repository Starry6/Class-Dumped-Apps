@interface CUOSStateHandler : NSObject
@property (nonatomic) @? handler;
@property (nonatomic) Q stateHandle;
@property (nonatomic) NSString title;
- (void)remove;
- (void)dealloc;
- (void)setHandler:;
- (void)setTitle:;
- (id)handler;
- (id)title;
- (void)setStateHandle:;
- (void).cxx_destruct;
- (unsigned long long)stateHandle;
- (id)initWithTitle:dispatchQueue:handler:;
- (id)_generateState;
@end
