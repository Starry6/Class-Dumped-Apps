@interface VSRecognitionResultHandlingRequest : NSObject
- (void)dealloc;
- (id)results;
- (id)handler;
- (id)nextAction;
- (id)initWithHandler:results:;
- (void)setNextAction:;
@end
