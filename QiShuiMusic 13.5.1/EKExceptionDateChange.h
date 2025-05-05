@interface EKExceptionDateChange : EKObjectChange
@property (nonatomic) NSDate date;
@property (nonatomic) EKObjectID ownerID;
- (id)date;
- (void).cxx_destruct;
- (id)ownerID;
- (id)initWithChangeProperties:;
- (id)owningEventInEventStore:;
+ (int)entityType;
@end
