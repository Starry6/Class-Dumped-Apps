@interface SAHLShowActivity : SADomainCommand
@property (nonatomic) NSString activityDataType;
@property (nonatomic) NSString activityView;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (void)setActivityView:;
- (id)encodedClassName;
- (id)activityView;
- (id)activityDataType;
- (void)setActivityDataType:;
+ (id)showActivity;
+ (id)showActivityWithDictionary:context:;
@end
