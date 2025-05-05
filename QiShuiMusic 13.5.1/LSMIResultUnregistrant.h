@interface LSMIResultUnregistrant : NSObject
- (void).cxx_destruct;
- (void)runWithCompletion:;
- (id)initWithContext:operationUUID:bundleIdentifier:precondition:type:;
@end
