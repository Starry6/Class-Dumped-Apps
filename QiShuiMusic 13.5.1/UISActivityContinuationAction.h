@interface UISActivityContinuationAction : BSAction
@property (nonatomic) NSString identifier;
@property (nonatomic) NSString activityTypeIdentifier;
@property (nonatomic) NSString originatingDeviceType;
@property (nonatomic) NSString originatingDeviceName;
@property (nonatomic) NSString activityType;
@property (nonatomic) NSDate lastUpdateTime;
@property (nonatomic) NSData userActivityData;
- (id)activityType;
- (id)lastUpdateTime;
- (id)identifier;
- (id)initWithSettings:;
- (long long)UIActionType;
- (id)userActivityData;
- (BOOL)isKindOfClass:;
- (id)keyDescriptionForSetting:;
- (id)activityTypeIdentifier;
- (id)originatingDeviceType;
- (id)originatingDeviceName;
@end
