@interface CKAssetDownloadStagingInfo : NSObject
@property (nonatomic) NSNumber itemID;
@property (nonatomic) NSString trackingUUID;
@property (nonatomic) NSData signature;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)CKDescribePropertiesUsing:;
- (id)signature;
- (id)itemID;
- (id)redactedDescription;
- (id)trackingUUID;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)initWithItemID:trackingUUID:signature:;
+ (BOOL)supportsSecureCoding;
@end
