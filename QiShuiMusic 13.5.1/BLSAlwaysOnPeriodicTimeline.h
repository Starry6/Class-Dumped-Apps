@interface BLSAlwaysOnPeriodicTimeline : BLSAlwaysOnTimeline
- (void).cxx_destruct;
- (id)unconfiguredEntriesForDateInterval:previousEntry:;
- (long long)requestedFidelityForStartEntryInDateInterval:withPreviousEntry:;
- (id)initWithUpdateInterval:startDate:identifier:configure:;
@end
