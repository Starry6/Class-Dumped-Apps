@interface PPAttendee : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) NSString emailAddress;
@property (nonatomic) NSURL url;
@property (nonatomic) BOOL isCurrentUser;
@property (nonatomic) C status;
- (id)emailAddress;
- (id)url;
- (id)init;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (unsigned char)status;
- (id)name;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)isCurrentUser;
- (id)initWithName:emailAddress:url:isCurrentUser:status:;
- (id)initWithName:emailAddress:urlString:isCurrentUser:status:;
- (id)initWithEKParticipant:;
- (BOOL)isEqualToAttendee:;
+ (BOOL)supportsSecureCoding;
@end
