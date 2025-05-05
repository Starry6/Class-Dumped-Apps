@interface SSSoftwareUpdatesContext : NSObject
@property (nonatomic) NSString clientIdentifierHeader;
@property (nonatomic) BOOL forced;
@property (nonatomic) NSArray softwareTypes;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithXPCEncoding:;
- (void)dealloc;
- (id)copyXPCEncoding;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
- (BOOL)isForced;
- (id)clientIdentifierHeader;
- (id)softwareTypes;
@end
