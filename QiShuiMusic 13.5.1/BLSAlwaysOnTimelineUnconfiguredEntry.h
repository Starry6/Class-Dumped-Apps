@interface BLSAlwaysOnTimelineUnconfiguredEntry : BLSAlwaysOnTimelineEntry
@property (nonatomic) q requestedFidelity;
@property (nonatomic) <NSObject><NSCopying> timelineIdentifier;
@property (nonatomic) BOOL animated;
@property (nonatomic) double duration;
@property (nonatomic) <NSObject> userObject;
- (id)initWithPresentationTime:requestedFidelity:animated:duration:timelineIdentifier:userObject:;
+ (id)entryForPresentationTime:withRequestedFidelity:;
+ (id)entryForPresentationTime:withRequestedFidelity:animated:userObject:;
+ (id)entryForPresentationTime:;
+ (id)entryForPresentationTime:animated:userObject:;
@end
