@interface CTPhoneNumberInfo : NSObject
@property (nonatomic) NSString label;
@property (nonatomic) NSString number;
@property (nonatomic) NSString displayPhoneNumber;
@property (nonatomic) BOOL isPresent;
@property (nonatomic) BOOL isEditable;
@property (nonatomic) BOOL isRead;
- (id)number;
- (void)setIsEditable:;
- (void)setLabel:;
- (id)initWithCoder:;
- (id)label;
- (BOOL)isEditable;
- (BOOL)isRead;
- (void)setNumber:;
- (void)encodeWithCoder:;
- (BOOL)isPresent;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
- (id)displayPhoneNumber;
- (void)setDisplayPhoneNumber:;
- (void)setIsPresent:;
- (void)setIsRead:;
+ (BOOL)supportsSecureCoding;
@end
