@interface ISIcnsIcon : ISConcreteIcon
@property (nonatomic) NSData icnsData;
@property (nonatomic) ISIcns internalICNS;
@property (nonatomic) ISIcns icns;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)makeResourceProvider;
- (void).cxx_destruct;
- (id)initWithContentOfURL:;
- (id)initWithIcns:;
- (id)initWithIcnsData:;
- (id)icns;
- (id)icnsData;
- (id)internalICNS;
- (void)setInternalICNS:;
+ (BOOL)supportsSecureCoding;
@end
