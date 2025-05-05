@interface SFRequestAppClipInstallCommand : SFCommand
@property (nonatomic) NSURL url;
@property (nonatomic) NSString applicationBundleIdentifier;
@property (nonatomic) NSDictionary dictionaryRepresentation;
@property (nonatomic) NSData jsonData;
@property (nonatomic) NSString commandDetail;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (int)_cpCommandType;
- (id)applicationBundleIdentifier;
- (id)url;
- (id)initWithProtobuf:;
- (id)initWithCoder:;
- (id)jsonData;
- (void)setUrl:;
- (void)encodeWithCoder:;
- (void)setApplicationBundleIdentifier:;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
