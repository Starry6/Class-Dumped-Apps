@interface LynxHttpRequest : NSObject
@property (nonatomic) NSString HTTPMethod;
@property (nonatomic) NSURL URL;
@property (nonatomic) NSData HTTPBody;
@property (nonatomic) NSDictionary allHTTPHeaderFields;
@property (nonatomic) BOOL addCommonParams;
@property (nonatomic) NSDictionary params;
@property (nonatomic) @ extraData;
- (BOOL)addCommonParams;
- (void)setAddCommonParams:;
- (id)HTTPBody;
- (void)setHTTPMethod:;
- (void).cxx_destruct;
- (void)setHTTPBody:;
- (id)params;
- (id)HTTPMethod;
- (void)setURL:;
- (id)URL;
- (id)allHTTPHeaderFields;
- (void)setAllHTTPHeaderFields:;
- (void)setExtraData:;
- (id)extraData;
- (void)setParams:;
@end
