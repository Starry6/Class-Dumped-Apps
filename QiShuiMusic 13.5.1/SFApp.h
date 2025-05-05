@interface SFApp : Process
@property (nonatomic) NSSet hasAppExperience;
@property (nonatomic) NSSet hasAppEndpoint;
@property (nonatomic) NSSet hasAppRun;
@property (nonatomic) NSSet hasCalendarUsage;
@property (nonatomic) NSOrderedSet hasTypicalUsage;
@property (nonatomic) SFAppCalendarUsage hintCalendarUsage;
- (void)insertObject:inHasTypicalUsageAtIndex:;
+ (id)entityName;
+ (id)fetchRequest;
@end
