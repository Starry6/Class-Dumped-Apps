@interface CNHandleStringsClassificationBuilder : NSObject
@property (nonatomic) NSMutableArray emailAddresses;
@property (nonatomic) NSMutableArray phoneNumbers;
@property (nonatomic) NSMutableArray unknown;
- (id)unknown;
- (id)phoneNumbers;
- (id)emailAddresses;
- (id)init;
- (void)addPhoneNumber:;
- (void)addEmailAddress:;
- (void)setUnknown:;
- (id)build;
- (void)setPhoneNumbers:;
- (void).cxx_destruct;
- (void)setEmailAddresses:;
- (void)addUnknown:;
@end
