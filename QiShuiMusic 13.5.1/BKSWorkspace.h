@interface BKSWorkspace : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)service:didReceiveInheritances:;
- (void)service:didLoseInheritances:;
+ (id)sharedInstance;
@end
