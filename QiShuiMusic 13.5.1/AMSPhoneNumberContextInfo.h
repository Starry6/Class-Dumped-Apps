@interface AMSPhoneNumberContextInfo : NSObject
@property (nonatomic) BOOL isVoicePreferred;
@property (nonatomic) NSString phoneNumber;
@property (nonatomic) NSString simLabel;
@property (nonatomic) NSUUID uuid;
- (id)phoneNumber;
- (id)uuid;
- (void).cxx_destruct;
- (id)description;
- (id)initWithPhoneNumber:simLabel:uuid:isVoicePreferred:;
- (BOOL)isVoicePreferred;
- (id)simLabel;
@end
