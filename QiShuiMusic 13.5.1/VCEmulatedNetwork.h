@interface VCEmulatedNetwork : NSObject
@property (nonatomic) I numberOfPacketsWaitingInOutputQueue;
@property (nonatomic) @? pushCompletionHandler;
@property (nonatomic) @? popCompletionHandler;
- (void)push:;
- (void)dealloc;
- (id)initWithPolicies:;
- (id)copyPacketFromPop;
- (void)runUntilTime:;
- (unsigned int)numberOfPacketsWaitingInOutputQueue;
- (id)pushCompletionHandler;
- (void)setPushCompletionHandler:;
- (id)popCompletionHandler;
- (void)setPopCompletionHandler:;
@end
