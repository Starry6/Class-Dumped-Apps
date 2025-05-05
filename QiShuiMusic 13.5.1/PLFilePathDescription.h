@interface PLFilePathDescription : NSObject
- (id)init;
- (id)redactedDescription;
- (void).cxx_destruct;
- (id)initWithPath:;
- (id)description;
+ (id)descriptionWithFileURL:;
+ (id)descriptionWithPath:;
@end
