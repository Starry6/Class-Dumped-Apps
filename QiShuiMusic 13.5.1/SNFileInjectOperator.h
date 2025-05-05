@interface SNFileInjectOperator : NSObject
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)processInput:portID:downstreamHandler:;
- (void)processTerminationWithOptionalError:portID:downstreamHandler:;
@end
