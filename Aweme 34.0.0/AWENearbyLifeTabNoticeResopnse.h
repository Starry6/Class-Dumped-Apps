@interface AWENearbyLifeTabNoticeResopnse : AWEBaseApiModel
@property (nonatomic) AWENearbyLifeInsertForwardCardData forwardCardData;
- (id)forwardCardData;
- (void)setForwardCardData:;
- (void).cxx_destruct;
+ (BOOL)automaticallyDefaultMapping;
+ (id)forwardCardDataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
