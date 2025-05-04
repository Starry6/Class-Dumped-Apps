@interface AWECommerceSmartPhoneModel : MTLModel
@property (nonatomic) NSString phoneNumber;
@property (nonatomic) BOOL isSmartPhone;
@property (nonatomic) NSString phoneID;
@property (nonatomic) NSString phoneKey;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)phoneKey;
- (void)setPhoneKey:;
- (void)setIsSmartPhone:;
- (id)phoneID;
- (BOOL)isSmartPhone;
- (void)setPhoneID:;
- (id)phoneNumber;
- (void)setPhoneNumber:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
