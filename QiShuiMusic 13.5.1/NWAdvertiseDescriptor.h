@interface NWAdvertiseDescriptor : NSObject
@property (nonatomic) NSObject<OS_nw_advertise_descriptor> internalDescriptor;
@property (nonatomic) NSString bonjourServiceDomain;
@property (nonatomic) NSString bonjourServiceType;
@property (nonatomic) NSString bonjourServiceName;
@property (nonatomic) NSData txtRecord;
- (id)descriptionWithIndent:showFullContent:;
- (id)initWithDescriptor:;
- (id)privateDescription;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
- (id)txtRecord;
- (void)setTxtRecord:;
- (id)initWithName:type:domain:;
- (id)bonjourServiceDomain;
- (id)bonjourServiceType;
- (id)bonjourServiceName;
- (id)internalDescriptor;
- (void)setInternalDescriptor:;
@end
