@interface SAActivityStream : SABaseCommand
@property (nonatomic) NSArray activities;
@property (nonatomic) NSString taskType;
@property (nonatomic) NSString aceId;
@property (nonatomic) NSString refId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (id)taskType;
- (BOOL)requiresResponse;
- (id)activities;
- (void)setActivities:;
- (id)encodedClassName;
- (void)setTaskType:;
+ (id)activityStream;
+ (id)activityStreamWithDictionary:context:;
@end
