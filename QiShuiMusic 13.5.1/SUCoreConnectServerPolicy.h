@interface SUCoreConnectServerPolicy : NSObject
@property (nonatomic) NSString serviceName;
@property (nonatomic) NSSet entitlements;
@property (nonatomic) <SUCoreConnectServerDelegate> serverDelegate;
@property (nonatomic) NSObject<OS_dispatch_queue> connectionQueue;
@property (nonatomic) NSObject<OS_dispatch_queue> delegateQueue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)entitlements;
- (id)connectionQueue;
- (id)serviceName;
- (id)delegateQueue;
- (void).cxx_destruct;
- (id)description;
- (id)serverDelegate;
- (id)initWithServiceName:entitlements:serverDelegate:;
+ (id)_getSharedServerAccessQueue;
+ (void)setAllowlistedClass:forKey:;
+ (id)_getAllowlistedClassesForKey:;
+ (void)setAllowlistedClasses:forKey:;
+ (void)setAllowlistedClasses:forKeys:;
+ (id)getAllowlistedClassesForKey:;
+ (void)clearAllowlistedClasses;
+ (id)_getSharedServerAllowlistedClasses;
@end
