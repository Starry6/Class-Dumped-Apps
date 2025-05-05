@interface ISUniqueOperationManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (void)uniqueOperationFinished:forKey:;
- (void)checkInOperation:;
- (id)lockWithIdentifier:;
- (id)_activeContext;
- (void)setPredecessorIfNeeded:forKey:;
- (id)predecessorForKey:operation:;
- (id)_contextForOperation:;
- (void)checkOutOperation:;
+ (id)sharedInstance;
+ (void)setSharedInstance:;
@end
