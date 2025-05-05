@interface NWBrowseDescriptor : NSObject
@property (nonatomic) NSObject<OS_nw_browse_descriptor> internalDescriptor;
@property (nonatomic) NSString privateDescription;
@property (nonatomic) NSString bonjourServiceDomain;
@property (nonatomic) NSString bonjourServiceType;
- (id)descriptionWithIndent:showFullContent:;
- (id)encodedData;
- (id)initWithDescriptor:;
- (id)privateDescription;
- (void).cxx_destruct;
- (id)description;
- (id)createProtocolBufferObject;
- (id)copyWithZone:;
- (id)bonjourServiceDomain;
- (id)bonjourServiceType;
- (id)internalDescriptor;
- (void)setInternalDescriptor:;
- (id)initWithEncodedData:;
- (void)browseWithCompletionHandler:;
+ (unsigned int)descriptorType;
+ (Class)copyClassForDescriptorType:;
+ (id)descriptorWithInternalDescriptor:;
+ (BOOL)supportsBrowseCallback;
+ (id)descriptorWithProtocolBufferData:;
@end
