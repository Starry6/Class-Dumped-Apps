@interface AWEIMEncryptImageRequestContext : NSObject
@property (nonatomic) NSString url;
@property (nonatomic) NSString uri;
@property (nonatomic) NSString skey;
@property (nonatomic) NSString scene;
@property (nonatomic) NSInteger priority;
- (id)skey;
- (void)setSkey:;
- (BOOL)checkProperty;
- (void)setScene:;
- (void)setUrl:;
- (id)scene;
- (int)priority;
- (id)uri;
- (void)setUri:;
- (void)setPriority:;
- (void).cxx_destruct;
- (id)url;
@end
