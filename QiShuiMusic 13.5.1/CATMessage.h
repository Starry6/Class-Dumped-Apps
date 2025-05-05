@interface CATMessage : NSObject
@property (nonatomic) @ cat_assertion;
@property (nonatomic) NSUUID messageUUID;
- (id)init;
- (id)messageUUID;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (void)setMessageUUID:;
- (id)cat_assertion;
- (void)setCat_assertion:;
+ (BOOL)supportsSecureCoding;
@end
