@interface CBDisplayModule : CBModule
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)handleNotificationForKey:withProperty:;
- (id)copyPropertyInternalForKey:;
- (id)copyIdentifiers;
- (void)start;
- (id)copyPropertyForKey:withParameter:;
- (void)stop;
- (id)copyPropertyForKey:;
- (BOOL)setProperty:forKey:;
@end
