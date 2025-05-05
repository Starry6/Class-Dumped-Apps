@interface IPAVideoPlaybackSettings : IPAEditDescription
@property (nonatomic) {?=qiIq} naturalDuration;
- (id)initWithOperations:;
- (BOOL)isEqualToDescription:;
- (id)debugDescription;
- (id)operationWithIdentifier:;
- (id)archivalRepresentation;
- (id)naturalDuration;
- (id)descriptionByInsertingOrReplacingOperation:;
- (id)scaledDuration;
- (id)naturalPlaybackRange;
- (id)scaledPlaybackRangeForScaledDuration:;
- (id)scaledTimeFromNaturalTime:;
- (id)naturalTimeFromScaledTime:;
- (id)naturalTimeForPosterFrame;
- (id)descriptionWithOperations:;
- (id)initWithOperations:naturalDuration:;
- (unsigned long long)sortOrderForOperationWithIdentifier:;
- (id)descriptionByAddingOperation:atIndex:;
- (id)descriptionByAddingOperation:;
- (id)descriptionByReplacingOperation:atIndex:;
- (id)posterFrameOperation;
- (id)trimOperation;
- (id)slomoOperation;
+ (Class)expectedOperationClass;
+ (id)playbackSettingsForAdjustments:;
+ (Class)operationClassForIdentifier:;
+ (id)presetifyAdjustmentStack:;
@end
