@interface BLSAlwaysOnFrameSpecifier : NSObject
@property (nonatomic) q grantedFidelity;
@property (nonatomic) NSArray entrySpecifiers;
@property (nonatomic) NSDateInterval presentationInterval;
@property (nonatomic) q requestedFidelity;
- (unsigned long long)hash;
- (id)debugDescription;
- (long long)compare:;
- (void).cxx_destruct;
- (long long)grantedFidelity;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)presentationInterval;
- (id)entrySpecifierForTimelineIdentifier:;
- (long long)requestedFidelity;
- (void)setGrantedFidelity:;
- (id)initWithTimelineEntrySpecifiers:presentationInterval:;
- (id)initWithTimelineEntry:previousTimelineEntry:;
- (id)correctedSpecifierWithNextSpecifier:;
- (id)entrySpecifiers;
+ (id)loggingStringForPresentationInterval:;
+ (id)shortLoggingStringForPresentationInterval:;
@end
