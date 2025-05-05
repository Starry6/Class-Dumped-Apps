@interface CXCallDirectoryMutablePhoneNumberEntryData : CXCallDirectoryPhoneNumberEntryData
@property (nonatomic) NSMutableData mutablePhoneNumberData;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCapacity:;
- (id)copyWithZone:;
- (id)mutablePhoneNumberData;
- (void)setMutablePhoneNumberData:;
- (void)appendPhoneNumber:;
@end
