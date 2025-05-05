@interface CADExpandedNotification : CADNotification
@property (nonatomic) CADObjectID attendeeObjectID;
- (void).cxx_destruct;
- (BOOL)expanded;
- (id)initWithType:objectID:occurrenceDate:expirationDate:attendeeObjectID:;
- (id)attendeeObjectID;
- (void)setAttendeeObjectID:;
@end
