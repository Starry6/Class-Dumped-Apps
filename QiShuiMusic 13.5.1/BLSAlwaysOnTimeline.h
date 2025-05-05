@interface BLSAlwaysOnTimeline : NSObject
@property (nonatomic) <NSObject><NSCopying> identifier;
- (id)identifier;
- (void).cxx_destruct;
- (id)initWithIdentifier:configure:;
- (id)unconfiguredEntriesForDateInterval:previousEntry:;
- (id)configureEntry:previousEntry:;
- (long long)requestedFidelityForStartEntryInDateInterval:withPreviousEntry:;
- (id)configuredEntriesForDateInterval:previousEntry:shouldConstructStartEntry:;
+ (id)timelineWithEntries:identifier:configure:;
+ (id)emptyTimelineWithIdentifier:;
+ (id)constructFrameSpecifiersForTimelines:dateInterval:shouldConstructStartSpecifier:framesPerSecond:previousSpecifier:;
+ (id)everyMinuteTimelineWithIdentifier:configure:;
+ (id)timelineWithPerMinuteUpdateFrequency:identifier:configure:;
+ (id)timelineWithUpdateInterval:startDate:identifier:configure:;
+ (id)rangeOfEntries:forDateInterval:shouldIncludePrevious:;
+ (id)uncoalescedFrameSpecifiersForTimelines:dateInterval:shouldConstructStartSpecifier:framesPerSecond:previousSpecifier:;
+ (id)coalescedSpecifierFromEnumerator:forDateInterval:framesPerSecond:previousSpecifier:;
+ (id)coalesceSpecifiers:forDateInterval:framesPerSecond:previousSpecifier:;
@end
