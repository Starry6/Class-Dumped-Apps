@interface AWEJSNetworkJsonRequest : MTLModel
@property (nonatomic) NSString url;
@property (nonatomic) NSString method;
@property (nonatomic) NSDictionary params;
@property (nonatomic) NSDictionary data;
@property (nonatomic) NSDictionary header;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)header;
- (void)setUrl:;
- (void)setMethod:;
- (void)setData:;
- (void).cxx_destruct;
- (id)data;
- (id)method;
- (id)params;
- (id)url;
- (void)setHeader:;
- (void)setParams:;
+ (id)JSONKeyPathsByPropertyKey;
@end
