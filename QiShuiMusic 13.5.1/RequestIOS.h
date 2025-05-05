@interface RequestIOS : NSObject
@property (nonatomic) NSURL url;
@property (nonatomic) NSString method;
@property (nonatomic) NSData body;
@property (nonatomic) NSDictionary headers;
- (id)init:method:;
- (id)init:method:headers:;
- (id)init:method:headers:body:;
- (id)url;
- (id)body;
- (id)method;
- (void)setHeaders:;
- (void)setUrl:;
- (void)setBody:;
- (void).cxx_destruct;
- (id)init:;
- (void)setMethod:;
- (id)headers;
@end
