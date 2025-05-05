@interface CXCallDirectoryMutableLabeledPhoneNumberEntryData : CXCallDirectoryLabeledPhoneNumberEntryData
@property (nonatomic) NSMutableData mutablePhoneNumberData;
@property (nonatomic) NSMutableData mutableLabelData;
@property (nonatomic) NSMutableDictionary labelToLabelDataOffset;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCapacity:;
- (id)copyWithZone:;
- (BOOL)appendPhoneNumber:label:;
- (id)mutablePhoneNumberData;
- (void)setMutablePhoneNumberData:;
- (id)mutableLabelData;
- (void)setMutableLabelData:;
- (id)labelToLabelDataOffset;
- (void)setLabelToLabelDataOffset:;
@end
