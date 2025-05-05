@interface INReportIncidentIncidentTypeResolutionResult : INSupportedTrafficIncidentTypeResolutionResult
- (id)_initWithIntentSlotResolutionResult:slotDescription:;
- (id)_buildIntentSlotResolutionResultWithIntentSlotDescription:;
- (id)initWithSupportedTrafficIncidentTypeResolutionResult:;
+ (id)unsupportedForReason:;
@end
