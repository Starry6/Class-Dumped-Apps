@interface MFAddressConcatenator : NSObject
@property (nonatomic) NSString andNMoreFormat;
@property (nonatomic) NSString andNMoreNoEllipsisFormat;
@property (nonatomic) NSString oneAddressFormat;
@property (nonatomic) NSString nAddressesFormat;
@property (nonatomic) NSString truncatedAddressFormat;
- (void).cxx_destruct;
- (void)getCommaSeparatedAddressList:andListSuffix:withAddressCount:prefixForAddressAtIndex:stringForAddressAtIndex:lengthValidationBlock:;
- (id)commaSeparatedAddressListWithAddressCount:prefixForAddressAtIndex:stringForAddressAtIndex:lengthValidationBlock:;
- (id)andNMoreFormat;
- (void)setAndNMoreFormat:;
- (id)andNMoreNoEllipsisFormat;
- (void)setAndNMoreNoEllipsisFormat:;
- (id)oneAddressFormat;
- (void)setOneAddressFormat:;
- (id)nAddressesFormat;
- (void)setNAddressesFormat:;
- (id)truncatedAddressFormat;
- (void)setTruncatedAddressFormat:;
+ (id)defaultRecipientListConcatenator;
@end
