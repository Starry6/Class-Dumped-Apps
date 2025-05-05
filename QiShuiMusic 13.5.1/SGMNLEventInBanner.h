@interface SGMNLEventInBanner : NSObject
@property (nonatomic) PETScalarEventTracker tracker;
- (id)init;
- (id)tracker;
- (void).cxx_destruct;
- (void)trackEventWithScalar:interface:actionType:eventType:languageID:daysFromStartDate:confidenceScore:significantSender:participantCount:extractionLevel:usedBubblesCount:titleSource:titleAdj:dateAdj:duraAdj:locationAdj:addedAttendeesCount:calendarAppUsageLevel:mailAppUsageLevel:messagesAppUsageLevel:;
@end
