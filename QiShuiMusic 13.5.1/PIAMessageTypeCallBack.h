@interface PIAMessageTypeCallBack : NSObject
@property (nonatomic) NSDictionary data;
@property (nonatomic) q ID;
@property (nonatomic) q statusCode;
@property (nonatomic) NSString errMsg;
- (id)errMsg;
- (void)setErrMsg:;
- (void)setID:;
- (id)JSONString;
- (void)setStatusCode:;
- (long long)ID;
- (long long)statusCode;
- (id)data;
- (id)initWithDictionary:;
- (void).cxx_destruct;
- (void)setData:;
- (id)JSONDictionary;
@end
