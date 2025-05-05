@interface TUPrivacyRule : NSObject
@property (nonatomic) NSInteger type;
@property (nonatomic) TUPhoneNumber phoneNumber;
@property (nonatomic) NSString email;
@property (nonatomic) NSString businessID;
- (id)phoneNumber;
- (id)businessID;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (int)type;
- (void).cxx_destruct;
- (id)email;
- (BOOL)isEqual:;
- (id)initForPhoneNumber:;
- (id)initForEmail:;
- (id)initForBusinessID:;
+ (id)ruleForPhoneNumber:;
+ (id)ruleForEmail:;
+ (id)ruleForBusinessID:;
@end
