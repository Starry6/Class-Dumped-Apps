@interface SAActivityObject : SADomainObject
@property (nonatomic) NSDate endDate;
@property (nonatomic) NSDictionary metadata;
@property (nonatomic) NSDate startDate;
@property (nonatomic) NSString streamType;
@property (nonatomic) NSString type;
@property (nonatomic) SAClientUserActivity userActivity;
@property (nonatomic) NSString visibility;
- (id)startDate;
- (id)groupIdentifier;
- (void)setVisibility:;
- (void)setStartDate:;
- (id)visibility;
- (id)metadata;
- (void)setType:;
- (void)setMetadata:;
- (void)setEndDate:;
- (id)endDate;
- (id)type;
- (id)encodedClassName;
- (id)userActivity;
- (id)streamType;
- (void)setUserActivity:;
- (void)setStreamType:;
+ (id)activityObject;
+ (id)activityObjectWithDictionary:context:;
@end
