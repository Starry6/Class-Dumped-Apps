@interface PHObjectDeleteValidator : NSObject
- (void).cxx_destruct;
- (id)initWithEntityName:managedObjectContext:;
- (BOOL)recordObjectID:;
- (BOOL)validateForDeleteWithRequestsByObjectID:error:;
@end
