@interface NRSwitchRecordCollection : NRPBSwitchRecordCollection
- (void)encodeWithCoder:;
- (void)truncateSwitchRecords;
+ (BOOL)supportsSecureCoding;
@end
