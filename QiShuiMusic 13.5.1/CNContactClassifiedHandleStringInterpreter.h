@interface CNContactClassifiedHandleStringInterpreter : NSObject
@property (nonatomic) CNHandleStringClassification classification;
@property (nonatomic) NSMutableArray emailAddressesImpl;
@property (nonatomic) NSMutableArray phoneNumbersImpl;
@property (nonatomic) NSMutableArray unconvertableHandles;
@property (nonatomic) BOOL hasBeenInterpreted;
@property (nonatomic) NSArray emailAddresses;
@property (nonatomic) NSArray phoneNumbers;
- (id)phoneNumbers;
- (id)emailAddresses;
- (id)init;
- (id)classification;
- (void).cxx_destruct;
- (id)description;
- (id)initWithHandleStringClassification:;
- (void)interpretValues;
- (void)interpretEmailAddresses;
- (void)interpretPhoneNumbers;
- (void)interpretUnknownsAsEmailAddresses;
- (id)emailAddressesImpl;
- (id)phoneNumbersImpl;
- (id)unconvertableHandles;
- (BOOL)hasBeenInterpreted;
- (void)setHasBeenInterpreted:;
@end
