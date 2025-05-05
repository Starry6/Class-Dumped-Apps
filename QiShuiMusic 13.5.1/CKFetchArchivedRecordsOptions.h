@interface CKFetchArchivedRecordsOptions : NSObject
@property (nonatomic) CKServerChangeToken previousServerChangeToken;
- (void)setPreviousServerChangeToken:;
- (id)previousServerChangeToken;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
