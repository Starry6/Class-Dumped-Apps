@interface SFCollaborationCloudSharingMailRequest : NSObject
@property (nonatomic) NSUUID collaborationItemIdentifier;
@property (nonatomic) NSURL fileOrFolderURL;
@property (nonatomic) CKShare share;
@property (nonatomic) CKContainerSetupInfo setupInfo;
@property (nonatomic) NSURL sharingURL;
@property (nonatomic) NSNumber accessType;
@property (nonatomic) NSNumber permissionType;
@property (nonatomic) NSNumber allowOthersToInvite;
@property (nonatomic) NSString appName;
@property (nonatomic) NSData appIconData;
- (id)share;
- (id)initWithCoder:;
- (id)appName;
- (id)setupInfo;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)accessType;
- (id)sharingURL;
- (id)fileOrFolderURL;
- (id)collaborationItemIdentifier;
- (id)allowOthersToInvite;
- (id)initWithCollaborationItemIdentifier:fileOrFolderURL:share:setupInfo:sharingURL:accessType:permissionType:allowOthersToInvite:appName:appIconData:;
- (id)initWithCloudSharingRequest:result:;
- (id)permissionType;
- (id)appIconData;
+ (BOOL)supportsSecureCoding;
@end
