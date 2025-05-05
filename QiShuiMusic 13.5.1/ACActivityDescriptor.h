@interface ACActivityDescriptor : NSObject
@property (nonatomic) NSString activityIdentifier;
@property (nonatomic) NSString platterTargetBundleIdentifier;
@property (nonatomic) ACActivityPresentationOptions presentationOptions;
@property (nonatomic) BOOL isEphemeral;
@property (nonatomic) NSDate createdDate;
@property (nonatomic) NSData descriptorData;
@property (nonatomic) q contentType;
- (void)setContentType:;
- (id)createdDate;
- (id)activityIdentifier;
- (void)setCreatedDate:;
- (long long)contentType;
- (BOOL)isEphemeral;
- (void)setActivityIdentifier:;
- (id)descriptorData;
- (void)setPresentationOptions:;
- (void).cxx_destruct;
- (void)setIsEphemeral:;
- (id)presentationOptions;
- (id)platterTargetBundleIdentifier;
- (id)initWithIdentifier:target:presentationOptions:isEphemeral:createdDate:descriptorData:contentType:;
- (void)setDescriptorData:;
- (void)setPlatterTargetBundleIdentifier:;
@end
