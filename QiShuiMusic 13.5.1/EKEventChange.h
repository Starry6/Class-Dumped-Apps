@interface EKEventChange : EKCalendarItemChange
@property (nonatomic) BOOL availabilityChanged;
@property (nonatomic) BOOL privacyLevelChanged;
@property (nonatomic) BOOL travelTimeChanged;
@property (nonatomic) BOOL travelStartLocationChanged;
@property (nonatomic) BOOL statusChanged;
@property (nonatomic) EKObjectID originalItemID;
- (void).cxx_destruct;
- (id)initWithChangeProperties:;
- (BOOL)statusChanged;
- (BOOL)availabilityChanged;
- (BOOL)privacyLevelChanged;
- (BOOL)travelTimeChanged;
- (BOOL)travelStartLocationChanged;
- (id)originalItemID;
+ (int)entityType;
@end
