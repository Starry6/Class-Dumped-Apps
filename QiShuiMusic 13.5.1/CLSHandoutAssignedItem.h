@interface CLSHandoutAssignedItem : CLSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSString currentActivityID;
@property (nonatomic) NSString title;
@property (nonatomic) NSInteger type;
@property (nonatomic) NSString identifier;
@property (nonatomic) NSMutableSet bundleIDs;
@property (nonatomic) CLSActivity currentActivity;
- (void)setAppIdentifier:;
- (id)bundleIDs;
- (long long)authorizationStatus;
- (id)identifier;
- (void)setTitle:;
- (id)initWithCoder:;
- (id)currentActivity;
- (void)encodeWithCoder:;
- (int)type;
- (id)title;
- (void).cxx_destruct;
- (void)setIdentifier:;
- (void)mergeWithObject:;
- (BOOL)validateObject:;
- (id)initWithType:title:handoutAttachmentID:;
- (id)currentActivityID;
- (void)setCurrentActivityID:;
- (void)addBundleIDs:;
- (id)createNewActivity;
- (long long)effectiveAuthorizationStatus;
+ (BOOL)supportsSecureCoding;
+ (id)relations;
@end
