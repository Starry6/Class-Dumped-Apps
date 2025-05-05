@interface TUCollaborationNotice : NSObject
@property (nonatomic) SWCollaborationHighlight collaboration;
@property (nonatomic) NSUUID UUID;
@property (nonatomic) q sessionEventType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithUUID:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)UUID;
- (BOOL)isEqual:;
- (long long)sessionEventType;
- (void)setSessionEventType:;
- (id)collaboration;
- (BOOL)isEqualToCollaborationNotice:;
- (void)setCollaboration:;
+ (BOOL)supportsSecureCoding;
@end
