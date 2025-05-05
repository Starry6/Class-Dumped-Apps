@interface CXCallDirectoryLabeledPhoneNumberEntryData : NSObject
@property (nonatomic) NSData phoneNumberData;
@property (nonatomic) NSData labelData;
@property (nonatomic) Q count;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)count;
- (id)phoneNumberData;
- (id)labelData;
- (long long)phoneNumberAtIndex:;
- (id)utf8LabelAtIndex:length:;
- (void)setPhoneNumberData:;
- (void)setLabelData:;
+ (BOOL)supportsSecureCoding;
@end
