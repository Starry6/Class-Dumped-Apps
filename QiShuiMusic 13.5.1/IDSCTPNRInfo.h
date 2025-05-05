@interface IDSCTPNRInfo : NSObject
@property (nonatomic) NSString PLMN;
@property (nonatomic) NSString IMSI;
@property (nonatomic) NSString PNRPhoneNumber;
@property (nonatomic) NSString phoneBookNumber;
- (void)setIMSI:;
- (void).cxx_destruct;
- (id)IMSI;
- (id)phoneBookNumber;
- (void)setPhoneBookNumber:;
- (id)initWithIMSI:PLMN:PNRPhoneNumber:phoneBookNumber:;
- (id)PLMN;
- (void)setPLMN:;
- (id)PNRPhoneNumber;
- (void)setPNRPhoneNumber:;
@end
