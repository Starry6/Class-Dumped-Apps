@interface ICDelegateAccountStoreOptions : NSObject
@property (nonatomic) NSString databasePath;
@property (nonatomic) BOOL singleWriter;
@property (nonatomic) NSXPCListenerEndpoint XPCEndpoint;
@property (nonatomic) NSString XPCServiceName;
- (id)databasePath;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)setSingleWriter:;
- (BOOL)isSingleWriter;
- (void)encodeWithCoder:;
- (void)setXPCEndpoint:;
- (void).cxx_destruct;
- (id)XPCEndpoint;
- (void)setXPCServiceName:;
- (void)setDatabasePath:;
- (id)XPCServiceName;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
+ (id)defaultOptionsWithServiceEndpoint:;
+ (id)defaultOptionsWithServiceName:;
+ (id)singleWriterOptionsWithDatabasePath:;
@end
