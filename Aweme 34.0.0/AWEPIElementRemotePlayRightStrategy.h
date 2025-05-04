@interface AWEPIElementRemotePlayRightStrategy : NSObject
@property (nonatomic) AWEElementStrategyContext context;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)aAWEPadModuleAdapter;
- (id)aAWEPlayInteractionAdapter;
- (BOOL)isInteractionOptEnable;
- (BOOL)matchContext:;
- (id)containerElementsWithContext:;
- (void)insertRightDislikeButton:;
- (unsigned long long)priority;
- (unsigned long long)type;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
+ (Class)aAWEPadModuleAdapterClass;
+ (Class)aAWEPlayInteractionAdapterClass;
@end
