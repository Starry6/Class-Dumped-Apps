@interface SHSheetUIServiceClientContext : NSObject
@property (nonatomic) NSString sessionIdentifier;
@property (nonatomic) NSArray activityConfigurations;
@property (nonatomic) BOOL isSharingExpanded;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithSessionIdentifier:;
- (id)initWithBSXPCCoder:;
- (id)sessionIdentifier;
- (void).cxx_destruct;
- (void)encodeWithBSXPCCoder:;
- (id)activityConfigurations;
- (void)setActivityConfigurations:;
- (BOOL)isSharingExpanded;
- (void)setIsSharingExpanded:;
+ (BOOL)supportsBSXPCSecureCoding;
@end
