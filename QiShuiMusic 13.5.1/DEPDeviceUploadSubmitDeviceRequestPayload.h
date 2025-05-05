@interface DEPDeviceUploadSubmitDeviceRequestPayload : NSObject
@property (nonatomic) NSString orgId;
@property (nonatomic) NSString orgName;
@property (nonatomic) DEPDeviceUploadRequestType requestType;
@property (nonatomic) DEPDeviceUploadUser submitter;
@property (nonatomic) DEPDeviceUploadUser approver;
@property (nonatomic) NSString soldToId;
- (id)requestType;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)submitter;
- (id)orgId;
- (id)orgName;
- (id)initWithOrgId:orgName:requestType:submitter:approver:soldToId:;
- (id)approver;
- (id)soldToId;
+ (BOOL)supportsSecureCoding;
@end
