@interface BDASifLynxModel : NSObject
@property (nonatomic) NSString accessKey;
@property (nonatomic) @ globalProps;
@property (nonatomic) NSData templateData;
@property (nonatomic) NSDictionary initialData;
@property (nonatomic) NSArray customUIElements;
- (void)setGlobalProps:;
- (void)setInitialData:;
- (id)customUIElements;
- (id)globalProps;
- (id)initialData;
- (void)setCustomUIElements:;
- (void)setTemplateData:;
- (id)templateData;
- (void).cxx_destruct;
- (id)accessKey;
- (void)setAccessKey:;
@end
