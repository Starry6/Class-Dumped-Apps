@interface SACFScriptUrlInformation : SABaseAceObject
@property (nonatomic) NSURL downloadUrl;
@property (nonatomic) NSDictionary headerFields;
@property (nonatomic) NSString requestMethodType;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)headerFields;
- (void)setHeaderFields:;
- (id)downloadUrl;
- (void)setDownloadUrl:;
- (id)requestMethodType;
- (void)setRequestMethodType:;
+ (id)scriptUrlInformation;
+ (id)scriptUrlInformationWithDictionary:context:;
@end
