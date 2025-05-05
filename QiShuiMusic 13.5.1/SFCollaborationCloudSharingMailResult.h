@interface SFCollaborationCloudSharingMailResult : NSObject
@property (nonatomic) NSString subject;
@property (nonatomic) NSString body;
@property (nonatomic) CKContainerID containerID;
@property (nonatomic) NSNumber canEdit;
@property (nonatomic) NSNumber allowOthersToInvite;
@property (nonatomic) NSError error;
- (id)subject;
- (id)containerID;
- (id)body;
- (id)error;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)canEdit;
- (id)initWithSubject:body:containerID:canEdit:allowOthersToInvite:error:;
- (id)allowOthersToInvite;
+ (BOOL)supportsSecureCoding;
@end
