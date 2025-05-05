@interface CPLRecordPushContext : NSObject
@property (nonatomic) NSString uploadIdentifier;
@property (nonatomic) q flags;
- (id)pushContextAddingUploadIdentifier;
- (id)initWithCoder:;
- (id)uploadIdentifier;
- (id)pushContextMergingFlags:changeType:uploadIdentifier:;
- (void)encodeWithCoder:;
- (id)copyContextWithUploadIdentifier:;
- (void).cxx_destruct;
- (long long)flags;
- (id)initWithUploadIdentifier:flags:;
+ (BOOL)supportsSecureCoding;
+ (id)newPushContextForChange:overStoredRecord:initialUpload:;
+ (id)newEmptyPushContext;
+ (id)pushContextsFromStoredUploadIdentifiersInCoder:key:;
+ (long long)mergingFlags:previousFlags:changeType:;
+ (id)pushContextsFromStoredUploadIdentifiers:;
@end
