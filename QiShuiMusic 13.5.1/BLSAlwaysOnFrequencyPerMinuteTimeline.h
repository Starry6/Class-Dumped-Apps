@interface BLSAlwaysOnFrequencyPerMinuteTimeline : BLSAlwaysOnTimeline
- (void).cxx_destruct;
- (id)unconfiguredEntriesForDateInterval:previousEntry:;
- (long long)requestedFidelityForStartEntryInDateInterval:withPreviousEntry:;
- (id)initWithPerMinuteUpdateFrequency:identifier:configure:;
@end
