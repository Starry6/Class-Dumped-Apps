@interface SFCollaborationCloudSharingResult : NSObject
@property (nonatomic) NSUUID collaborationItemIdentifier;
@property (nonatomic) NSURL sharingURL;
@property (nonatomic) CKShare share;
@property (nonatomic) NSError error;
@property (nonatomic) BOOL existingShare;
@property (nonatomic) SFCollaborationCloudSharingMailResult mailResult;
- (id)share;
- (id)error;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)sharingURL;
- (id)initWithCollaborationItemIdentifier:sharingURL:share:error:mailResult:;
- (id)mailResult;
- (BOOL)existingShare;
- (id)collaborationItemIdentifier;
- (id)initWithCollaborationItemIdentifier:sharingURL:share:existingShare:error:mailResult:;
- (void)setMailResult:;
+ (BOOL)supportsSecureCoding;
@end
