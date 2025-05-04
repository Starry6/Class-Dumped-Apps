@interface AWEPOIDetailPreloadInfoModel : NSObject
@property (nonatomic) BOOL hasPreloaded;
@property (nonatomic) NSString scene;
@property (nonatomic) NSString method;
@property (nonatomic) NSString schema;
@property (nonatomic) NSString bizCode;
@property (nonatomic) NSDictionary config;
- (id)bizCode;
- (void)setBizCode:;
- (void)updateSchema:;
- (void)setHasPreloaded:;
- (BOOL)hasPreloaded;
- (id)schema;
- (void)setConfig:;
- (void)setScene:;
- (void)setSchema:;
- (id)scene;
- (id)config;
- (void)setMethod:;
- (void).cxx_destruct;
- (id)method;
@end
