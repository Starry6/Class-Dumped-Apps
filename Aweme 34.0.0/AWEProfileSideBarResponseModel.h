@interface AWEProfileSideBarResponseModel : MTLModel
@property (nonatomic) NSNumber statusCode;
@property (nonatomic) NSString statusMsg;
@property (nonatomic) NSDictionary data;
@property (nonatomic) NSDictionary traceInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)statusMsg;
- (void)setStatusMsg:;
- (id)traceInfo;
- (void)setTraceInfo:;
- (id)statusCode;
- (id)description;
- (void)setData:;
- (void).cxx_destruct;
- (id)data;
- (void)setStatusCode:;
+ (id)JSONKeyPathsByPropertyKey;
@end
