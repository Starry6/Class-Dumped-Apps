@interface RACChannel : NSObject
@property (nonatomic) RACChannelTerminal leadingTerminal;
@property (nonatomic) RACChannelTerminal followingTerminal;
- (id)leadingTerminal;
- (id)followingTerminal;
- (id)init;
- (void).cxx_destruct;
@end
