@interface SATimerTimerShow : SADomainCommand
@property (nonatomic) NSArray actions;
@property (nonatomic) NSArray timerIds;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (void)setActions:;
- (BOOL)requiresResponse;
- (id)actions;
- (id)encodedClassName;
- (id)timerIds;
- (void)setTimerIds:;
+ (id)timerShow;
+ (id)timerShowWithDictionary:context:;
@end
