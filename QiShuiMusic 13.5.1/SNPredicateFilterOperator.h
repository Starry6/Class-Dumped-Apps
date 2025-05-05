@interface SNPredicateFilterOperator : NSObject
- (id)init;
- (void).cxx_destruct;
- (void)processInput:portID:downstreamHandler:;
- (void)processTerminationWithOptionalError:portID:downstreamHandler:;
@end
