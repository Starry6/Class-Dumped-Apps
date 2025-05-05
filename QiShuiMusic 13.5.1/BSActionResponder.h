@interface BSActionResponder : NSObject
- (id)init;
- (void)dealloc;
- (void)setTimeout:;
- (void)annul;
- (void).cxx_destruct;
- (void)setQueue:;
+ (id)responderByWrappingResponder:withHandler:;
+ (id)responderWithHandler:;
@end
