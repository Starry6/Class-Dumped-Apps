@interface AWESearchAdModel : MTLModel
@property (nonatomic) AWESearchAdEasterEggModel eggModel;
@property (nonatomic) NSString logData;
@property (nonatomic) NSString feedExtra;
@property (nonatomic) AWEFullScreenAdEggModel fullScreenAdEggModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setFeedExtra:;
- (void)setEggModel:;
- (id)fullScreenAdEggModel;
- (void)setFullScreenAdEggModel:;
- (id)eggModel;
- (id)feedExtra;
- (id)logData;
- (void)setLogData:;
- (void).cxx_destruct;
+ (id)eggModelJSONTransformer;
+ (id)fullScreenAdEggModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
