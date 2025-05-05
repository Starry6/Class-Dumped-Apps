@interface CKBaseRequestModel : NSObject
@property (nonatomic) NSString host;
@property (nonatomic) NSString urlPath;
@property (nonatomic) NSDictionary extraParams;
- (void)setExtraParams:;
- (id)extraParams;
- (void)setUrlPath:;
- (id)host;
- (void)setHost:;
- (void).cxx_destruct;
- (id)urlPath;
@end
