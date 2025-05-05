@interface JETreatmentAction : NSObject
- (void).cxx_destruct;
- (void)performActionWithContext:;
- (id)initWithField:configuration:;
- (id)performAction:context:;
+ (id)treatmentActionWithField:configuration:topic:;
@end
