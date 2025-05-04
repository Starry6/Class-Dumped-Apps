@interface AWEIMGroupImpl.GroupChainsInfoByRangeResponse : MTLModel
@property (nonatomic) NSArray groupChainsList;
@property (nonatomic) NSNumber statusCode;
@property (nonatomic) NSString statusMsg;
- (id)statusMsg;
- (id)groupChainsList;
- (void)setGroupChainsList:;
- (void)setStatusMsg:;
- (id)statusCode;
- (id)initWithDictionary:error:;
- (id)init;
- (void).cxx_destruct;
- (void)setStatusCode:;
- (id)initWithCoder:;
+ (id)groupChainsListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
