@interface AWEShareIMFetchContactResultModel : NSObject
@property (nonatomic) q fetchContactResultType;
@property (nonatomic) NSString fetchContactErrorDescription;
- (void)setFetchContactErrorDescription:;
- (void)setFetchContactResultType:;
- (long long)fetchContactResultType;
- (id)fetchContactErrorDescription;
- (void).cxx_destruct;
@end
