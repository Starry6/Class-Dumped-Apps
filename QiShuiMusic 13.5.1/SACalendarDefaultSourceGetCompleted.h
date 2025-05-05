@interface SACalendarDefaultSourceGetCompleted : SABaseCommand
@property (nonatomic) SACalendarSource aceCalendarSource;
@property (nonatomic) NSString aceId;
@property (nonatomic) NSString refId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)initWithAceCalendarSource:;
- (id)aceCalendarSource;
- (void)setAceCalendarSource:;
+ (id)defaultSourceGetCompleted;
+ (id)defaultSourceGetCompletedWithDictionary:context:;
+ (id)defaultSourceGetCompletedWithAceCalendarSource:;
@end
