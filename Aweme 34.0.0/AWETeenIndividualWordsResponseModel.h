@interface AWETeenIndividualWordsResponseModel : AWEBaseApiModel
@property (nonatomic) NSArray suggestWordsArray;
@property (nonatomic) NSString logId;
- (id)suggestWordsArray;
- (id)logId;
- (void)setLogId:;
- (void).cxx_destruct;
- (void)setSuggestWordsArray:;
+ (id)suggestWordsArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
