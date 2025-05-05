@interface CNUIAAfamilyMember : NSObject
@property (nonatomic) NSString appleID;
@property (nonatomic) NSString firstName;
@property (nonatomic) NSString lastName;
@property (nonatomic) BOOL isMe;
- (void)setLastName:;
- (id)appleID;
- (BOOL)isMe;
- (void)setFirstName:;
- (void)setIsMe:;
- (id)firstName;
- (id)lastName;
- (id)initWithCoder:;
- (void)setAppleID:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
+ (BOOL)supportsSecureCoding;
+ (id)cnuiFamilyMemberWithAAFamilyMember:;
@end
