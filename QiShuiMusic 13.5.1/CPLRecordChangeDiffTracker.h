@interface CPLRecordChangeDiffTracker : NSObject
@property (nonatomic) NSArray updatedProperties;
- (id)init;
- (id)redactedDescription;
- (void).cxx_destruct;
- (id)description;
- (id)updatedProperties;
- (id)initWithTrackingChangeTypeMask:;
- (void)withTrackerForChangeType:block:;
- (BOOL)areObjectsDifferentOnProperty:changeType:;
@end
