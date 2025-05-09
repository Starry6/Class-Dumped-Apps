@interface EKFrozenReminderAlarm : EKFrozenReminderObject
@property (nonatomic) NSArray alarms;
@property (nonatomic) NSArray triggers;
@property (nonatomic) NSString externalID;
@property (nonatomic) EKFrozenReminderStructuredLocation structuredLocation;
- (id)emailAddress;
- (id)remObjectID;
- (id)triggers;
- (id)uniqueIdentifier;
- (id)alarms;
- (id)externalID;
- (void)setEmailAddress:;
- (id)urlWrapper;
- (long long)proximity;
- (void)setType:;
- (void)setUrlWrapper:;
- (id)snoozedAlarmsSet;
- (id)structuredLocation;
- (id)absoluteDate;
- (long long)type;
- (id)acknowledgedDate;
- (id)originalAlarm;
- (double)relativeOffset;
- (void).cxx_destruct;
- (id)calendarOwner;
- (void)setCalendarOwner:;
- (void)setCalendarItemOwner:;
- (BOOL)isDefaultAlarm;
- (id)UUID;
- (id)calendarItemOwner;
- (id)initWithREMObject:inStore:withChanges:;
- (BOOL)_applyChanges:error:;
- (BOOL)_applyChangesToSaveRequest:error:;
- (id)initWithAlternateUniverseObject:inEventStore:withUpdatedChildObjects:;
- (id)updatedFrozenObjectWithChanges:updatedChildren:;
- (id)initWithAlarms:inStore:;
- (id)initWithAlarms:inStore:withChanges:;
- (void)_setTimeAndLocationAlarms:;
- (id)_setTimeOrLocationAlarm:;
- (id)_timeAlarm;
- (id)_locationAlarm;
- (id)modifiedStructuredLocation;
- (id)_remStructuredLocation;
- (id)updatedAlarmWithLocation:;
- (id)_effectiveAlarm;
+ (Class)meltedClass;
+ (id)uniqueIdentifierForREMObject:;
+ (long long)remAlarmProximityToEKAlarmProximity:;
+ (long long)ekAlarmProximityToEKAlarmProximity:;
+ (id)triggersFromAbsoluteDate:relativeOffset:timeValuesRelevant:structuredLocation:proximity:;
+ (id)semanticIdentifierFromREMAlarm:;
+ (id)semanticIdentifierFromDateComponents:;
@end
