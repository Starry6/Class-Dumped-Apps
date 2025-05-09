@interface CoreDAVContainer : NSObject
@property (nonatomic) CoreDAVSupportedReportSetItem supportedReportSetItem;
@property (nonatomic) NSURL url;
@property (nonatomic) BOOL isUnauthenticated;
@property (nonatomic) CoreDAVResourceTypeItem resourceType;
@property (nonatomic) NSString containerTitle;
@property (nonatomic) NSSet privileges;
@property (nonatomic) NSString pushKey;
@property (nonatomic) NSDictionary pushTransports;
@property (nonatomic) NSURL resourceID;
@property (nonatomic) NSString quotaAvailable;
@property (nonatomic) NSString quotaUsed;
@property (nonatomic) NSSet supportedReports;
@property (nonatomic) NSURL owner;
@property (nonatomic) NSURL addMemberURL;
@property (nonatomic) NSDictionary bulkRequests;
@property (nonatomic) NSString syncToken;
@property (nonatomic) NSSet resourceTypeAsStringSet;
@property (nonatomic) BOOL isPrincipal;
@property (nonatomic) NSSet privilegesAsStringSet;
@property (nonatomic) BOOL hasReadPrivileges;
@property (nonatomic) BOOL hasWriteContentPrivileges;
@property (nonatomic) BOOL hasWritePropertiesPrivileges;
@property (nonatomic) BOOL hasBindPrivileges;
@property (nonatomic) BOOL hasUnbindPrivileges;
@property (nonatomic) NSSet supportedReportsAsStringSet;
@property (nonatomic) BOOL supportsPrincipalPropertySearchReport;
@property (nonatomic) BOOL supportsSyncCollectionReport;
- (id)supportedReportsAsStringSet;
- (void)setResourceID:;
- (id)pushTransports;
- (id)supportedReports;
- (void)setSyncToken:;
- (void)setSupportedReportSetItem:;
- (id)quotaAvailable;
- (id)url;
- (BOOL)hasReadPrivileges;
- (id)pushKey;
- (void)setIsUnauthenticated:;
- (BOOL)supportsPrincipalPropertySearchReport;
- (id)bulkRequests;
- (BOOL)hasWritePropertiesPrivileges;
- (void)setQuotaAvailable:;
- (BOOL)supportsSyncCollectionReport;
- (id)resourceID;
- (void)applyParsedProperties:;
- (BOOL)isUnauthenticated;
- (BOOL)isPrincipal;
- (id)quotaUsed;
- (id)privilegesAsStringSet;
- (id)syncToken;
- (id)supportedReportSetItem;
- (BOOL)hasBindPrivileges;
- (void)setOwner:;
- (void)setPushKey:;
- (void)setPrivileges:;
- (void)setPushTransports:;
- (void)setContainerTitle:;
- (id)resourceType;
- (BOOL)_anyPrivilegesMatches:;
- (id)resourceTypeAsStringSet;
- (id)privileges;
- (id)addMemberURL;
- (void)setQuotaUsed:;
- (BOOL)hasWriteContentPrivileges;
- (void)setResourceType:;
- (void)setBulkRequests:;
- (void)setAddMemberURL:;
- (id)containerTitle;
- (id)owner;
- (id)initWithURL:andProperties:;
- (BOOL)hasUnbindPrivileges;
- (void)postProcessWithResponseHeaders:;
- (void)setUrl:;
- (void).cxx_destruct;
- (id)description;
+ (id)copyPropertyMappingsForParser;
+ (id)convertPushTransportsForNSServerNotificationCenter:;
@end
