@interface BLSAlwaysOnTimelineEntrySpecifier : NSObject
@property (nonatomic) BOOL didChange;
@property (nonatomic) q grantedFidelity;
@property (nonatomic) q requestedFidelity;
@property (nonatomic) BLSAlwaysOnTimelineEntry timelineEntry;
@property (nonatomic) double percentComplete;
@property (nonatomic) BLSAlwaysOnTimelineEntry previousTimelineEntry;
- (double)percentComplete;
- (unsigned long long)hash;
- (id)debugDescription;
- (long long)compare:;
- (void).cxx_destruct;
- (long long)grantedFidelity;
- (id)description;
- (id)timelineEntry;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (long long)requestedFidelity;
- (id)previousTimelineEntry;
- (id)initWithTimelineEntry:percentComplete:previousTimelineEntry:didChange:;
- (void)setRequestedFidelity:;
- (void)setGrantedFidelity:;
- (BOOL)didChange;
- (void)setDidChange:;
@end
