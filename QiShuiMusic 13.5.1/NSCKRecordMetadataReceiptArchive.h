@interface NSCKRecordMetadataReceiptArchive : NSObject
- (void)dealloc;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)initWithReceiptsToEncode:;
- (void)enumerateArchivedRecordIDsUsingBlock:;
+ (BOOL)supportsSecureCoding;
@end
