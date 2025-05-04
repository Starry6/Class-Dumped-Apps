@interface AWEECFollowEcomGroupControllerFactory : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)referString;
+ (BOOL)canReuseViewController;
+ (BOOL)canCreateWithActionType:;
+ (unsigned long long)actionType;
+ (id)createViewController;
@end
