@interface AWEFeedSearchLongBarModel : AWEBaseApiModel
@property (nonatomic) NSArray data;
@property (nonatomic) NSString logID;
- (BOOL)isValidHomepageRecomData;
- (void)setData:;
- (void).cxx_destruct;
- (id)data;
- (id)logID;
- (void)setLogID:;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)dataJSONTransformer;
@end
