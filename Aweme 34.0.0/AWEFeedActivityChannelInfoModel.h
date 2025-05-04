@interface AWEFeedActivityChannelInfoModel : MTLModel
@property (nonatomic) NSString activityID;
@property (nonatomic) q topTabTheme;
@property (nonatomic) q bottomTabTheme;
@property (nonatomic) q startTime;
@property (nonatomic) q endTime;
@property (nonatomic) AWEFeedActivityTopBarItemConfig topBarItemConfig;
@property (nonatomic) NSArray badgeArray;
@property (nonatomic) NSArray bubbleArray;
@property (nonatomic) NSDictionary extraInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)topBarItemConfig;
- (id)badgeArray;
- (id)bubbleArray;
- (long long)topTabTheme;
- (long long)bottomTabTheme;
- (BOOL)isValidWithError:;
- (long long)endTime;
- (void).cxx_destruct;
- (long long)startTime;
- (id)activityID;
- (id)extraInfo;
+ (id)badgeArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
