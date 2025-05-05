@interface BDXWebFalconMonitorInterceptor : NSObject
@property (nonatomic) BDXWebView container;
@property (nonatomic) NSString templateURLString;
@property (nonatomic) q templateResourceFrom;
@property (nonatomic) Q packageVersion;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didGetMetaData:forRequest:isGetMethod:isCustomInterceptor:;
- (unsigned long long)packageVersion;
- (void)setPackageVersion:;
- (void)setTemplateResourceFrom:;
- (void)setTemplateURLString:;
- (long long)templateResourceFrom;
- (void)templateURLChangedTo:;
- (id)templateURLString;
- (id)initWithContainer:;
- (void)setContainer:;
- (id)container;
- (void).cxx_destruct;
@end
