@interface BDASifPageContainerService : BDXPageContainerService
@property (nonatomic) <BDXDisableSwipeServiceProtocol> disableSwipeDelegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)create:context:;
+ (id)serviceBizID;
+ (unsigned long long)serviceScope;
+ (unsigned long long)serviceType;
@end
