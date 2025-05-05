@interface BLSAlwaysOnExplicitEntriesTimeline : BLSAlwaysOnTimeline
- (void).cxx_destruct;
- (id)unconfiguredEntriesForDateInterval:previousEntry:;
- (long long)requestedFidelityForStartEntryInDateInterval:withPreviousEntry:;
- (id)initWithEntries:identifier:configure:;
@end
