@interface AWEIMFindSimilarEmoticonResponseModel : MTLModel
@property (nonatomic) Q statusCode;
@property (nonatomic) NSString statusMsg;
@property (nonatomic) NSArray similarStickers;
@property (nonatomic) NSString searchLogID;
@property (nonatomic) NSDictionary dictionaryValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)statusMsg;
- (void)setStatusMsg:;
- (id)searchLogID;
- (void)setSearchLogID:;
- (id)similarStickers;
- (void)setSimilarStickers:;
- (unsigned long long)statusCode;
- (void).cxx_destruct;
- (void)setStatusCode:;
+ (id)similarStickersJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
