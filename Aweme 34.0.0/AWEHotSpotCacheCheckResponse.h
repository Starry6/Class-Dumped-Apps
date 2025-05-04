@interface AWEHotSpotCacheCheckResponse : MTLModel
@property (nonatomic) NSArray awemeIDs;
@property (nonatomic) NSDictionary awemeIDAndCommonBarInfoDict;
@property (nonatomic) NSDictionary checkResult;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)checkResult;
- (void)setCheckResult:;
- (id)awemeIDs;
- (void)setAwemeIDs:;
- (id)awemeIDAndCommonBarInfoDict;
- (void)setAwemeIDAndCommonBarInfoDict:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
