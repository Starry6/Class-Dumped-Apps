@interface CTXPCContextInfo : NSObject
@property (nonatomic) NSString labelID;
@property (nonatomic) NSString label;
@property (nonatomic) NSString phoneNumber;
@property (nonatomic) NSUUID uuid;
@property (nonatomic) NSString accountID;
@property (nonatomic) q slotID;
- (id)phoneNumber;
- (id)accountID;
- (id)context;
- (void)setPhoneNumber:;
- (id)uuid;
- (long long)slotID;
- (void)setLabel:;
- (id)initWithCoder:;
- (id)label;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)setLabelID:;
- (id)description;
- (id)labelID;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithUUID:andAccountID:andSlot:;
+ (BOOL)supportsSecureCoding;
+ (id)contextWithUUID:andAccountID:andSlot:;
@end
