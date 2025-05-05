@interface IESIMNetworkFilterConfig : NSObject
@property (nonatomic) BOOL enable;
@property (nonatomic) @? TTRequestFilter;
@property (nonatomic) @? NSRequestFilter;
@property (nonatomic) @? RequestBuilder;
@property (nonatomic) @? responseFilter;
- (id)RequestBuilder;
- (id)TTRequestFilter;
- (id)NSRequestFilter;
- (id)responseFilter;
- (void)setNSRequestFilter:;
- (void)setRequestBuilder:;
- (void)setResponseFilter:;
- (void)setTTRequestFilter:;
- (BOOL)enable;
- (void).cxx_destruct;
- (void)setEnable:;
@end
