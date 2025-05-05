@interface IESLiveRequestParamModel : IESLiveBridgeModel
@property (nonatomic) NSString url;
@property (nonatomic) NSString method;
@property (nonatomic) NSDictionary header;
@property (nonatomic) @ body;
@property (nonatomic) NSString responseType;
@property (nonatomic) NSDictionary params;
@property (nonatomic) BOOL usePrefetch;
@property (nonatomic) BOOL needCommonParams;
- (id)init;
@end
