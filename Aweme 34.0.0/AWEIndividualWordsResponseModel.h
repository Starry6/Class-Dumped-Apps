@interface AWEIndividualWordsResponseModel : AWEBaseApiModel
@property (nonatomic) NSArray suggestWordsArray;
@property (nonatomic) NSString logID;
- (id)suggestWordsArray;
- (void).cxx_destruct;
- (id)logID;
- (void)setLogID:;
- (void)setSuggestWordsArray:;
+ (id)suggestWordsArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
