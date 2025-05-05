@interface OTControlArguments : NSObject
@property (nonatomic) NSString contextID;
@property (nonatomic) NSString containerName;
@property (nonatomic) NSString altDSID;
- (id)containerName;
- (id)init;
- (void)setAltDSID:;
- (id)initWithAltDSID:;
- (void)setContainerName:;
- (id)altDSID;
- (id)contextID;
- (void)setContextID:;
- (id)initWithCoder:;
- (id)initWithContainerName:contextID:altDSID:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)makeConfigurationContext;
- (id)initWithConfiguration:;
+ (BOOL)supportsSecureCoding;
@end
