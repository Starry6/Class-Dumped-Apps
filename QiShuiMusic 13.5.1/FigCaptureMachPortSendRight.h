@interface FigCaptureMachPortSendRight : NSObject
@property (nonatomic) I port;
- (id)initWithPort:;
- (void)dealloc;
- (unsigned int)port;
- (id)description;
- (void)invalidate;
@end
