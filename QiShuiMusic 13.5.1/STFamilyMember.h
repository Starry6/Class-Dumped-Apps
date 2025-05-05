@interface STFamilyMember : NSObject
@property (nonatomic) BOOL isMe;
@property (nonatomic) BOOL isParent;
@property (nonatomic) BOOL isOrganizer;
@property (nonatomic) NSNumber DSID;
@property (nonatomic) NSString altDSID;
@property (nonatomic) NSString appleID;
@property (nonatomic) NSString memberType;
@property (nonatomic) NSString firstName;
@property (nonatomic) NSString lastName;
- (id)appleID;
- (BOOL)isMe;
- (id)DSID;
- (id)altDSID;
- (void)setIsMe:;
- (id)firstName;
- (id)lastName;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isParent;
- (id)memberType;
- (BOOL)isOrganizer;
- (void)setIsOrganizer:;
- (id)initWithDSID:altDSID:appleID:memberType:firstName:lastName:isMe:isParent:isOrganizer:;
- (void)setIsParent:;
@end
