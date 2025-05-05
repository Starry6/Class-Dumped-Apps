@interface SSMutableSoftwareUpdatesContext : SSSoftwareUpdatesContext
@property (nonatomic) NSString clientIdentifierHeader;
@property (nonatomic) BOOL forced;
@property (nonatomic) NSArray softwareTypes;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithXPCEncoding:;
- (id)copyXPCEncoding;
- (void)setClientIdentifierHeader:;
- (void)setForced:;
- (void)setSoftwareTypes:;
@end
