@interface CXCallDirectoryPhoneNumberEntryData : NSObject
@property (nonatomic) NSData phoneNumberData;
@property (nonatomic) r^q phoneNumbers;
@property (nonatomic) Q count;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)phoneNumbers;
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)count;
- (id)phoneNumberData;
- (long long)phoneNumberAtIndex:;
- (void)setPhoneNumberData:;
+ (BOOL)supportsSecureCoding;
@end
