@interface NSFileCoordinatorReacquisitionBlockCompletion : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)decrement;
- (void)dealloc;
- (void)increment;
+ (id)completionWithBlock:queue:;
@end
