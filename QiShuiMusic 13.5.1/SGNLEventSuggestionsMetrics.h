@interface SGNLEventSuggestionsMetrics : NSObject
@property (nonatomic) SGMDDLinkShown ddLinkShown;
@property (nonatomic) SGMNLEventInBanner nlEvent;
- (id)init;
- (void).cxx_destruct;
- (id)ddLinkShown;
- (void)setDdLinkShown:;
- (id)nlEvent;
- (void)setNlEvent:;
+ (id)instance;
+ (void)recordUserInteraction:withLinkInApplication:eventPrefillMode:eventTypeClassification:proposedEvent:confirmedEvent:;
+ (void)shownViaDataDetectorsLinkInApp:;
+ (void)recordInteractionForEventWithInterface:actionType:harvestedSGEvent:curatedEKEvent:;
+ (void)recordInteractionForEventWithInterface:actionType:harvestedEKEvent:curatedEKEvent:;
+ (void)recordInteractionForEventWithInterface:actionType:eventType:extractionLevel:harvestedEKEvent:curatedEKEvent:;
+ (void)recordInteractionForEventWithInterface:actionType:eventType:languageID:startDate:confidenceScore:participantCount:significantSender:extractionLevel:usedBubblesCount:titleSource:titleAdj:dateAdj:duraAdj:locationAdj:addedAttendeesCount:calendarAppUsageLevel:mailAppUsageLevel:messagesAppUsageLevel:;
+ (id)getAddedAttendeesCountFromEKEvent:;
+ (unsigned long long)bucketizeInteger:withBucketSize:limit:;
+ (double)round:toSignificantFigures:;
+ (id)diffEventTitleChangedFrom:to:;
+ (id)diffEventStartDateChangedFrom:oldTimeZone:to:newTimeZone:;
+ (id)diffEventDurationChangedFrom:to:;
+ (id)diffEventLocationFrom:to:;
@end
