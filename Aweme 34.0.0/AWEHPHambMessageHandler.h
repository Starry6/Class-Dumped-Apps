@interface AWEHPHambMessageHandler : NSObject
@property (nonatomic) @? newMessageBlock;
- (id)newMessageBlock;
- (void)setNewMessageBlock:;
- (void)handleMessage:;
- (id)initWithBlock:;
- (void)setup;
- (void).cxx_destruct;
@end
