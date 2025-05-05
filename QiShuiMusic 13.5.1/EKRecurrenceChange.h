@interface EKRecurrenceChange : EKObjectChange
@property (nonatomic) EKObjectID ownerID;
- (void).cxx_destruct;
- (id)ownerID;
- (id)initWithChangeProperties:;
+ (int)entityType;
@end
