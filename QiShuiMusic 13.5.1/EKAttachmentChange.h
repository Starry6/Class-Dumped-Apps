@interface EKAttachmentChange : EKObjectChange
@property (nonatomic) EKObjectID ownerID;
@property (nonatomic) NSString uuid;
@property (nonatomic) NSString externalID;
- (id)externalID;
- (id)uuid;
- (void).cxx_destruct;
- (id)ownerID;
- (id)initWithChangeProperties:;
+ (int)entityType;
@end
