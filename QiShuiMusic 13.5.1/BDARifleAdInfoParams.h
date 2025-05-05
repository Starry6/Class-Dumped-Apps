@interface BDARifleAdInfoParams : NSObject
@property (nonatomic) NSString adID;
@property (nonatomic) NSNumber adType;
@property (nonatomic) NSNumber creativeID;
@property (nonatomic) NSString groupID;
@property (nonatomic) NSString logExtra;
@property (nonatomic) NSArray trackUrlList;
@property (nonatomic) NSString SKANParameters;
- (id)SKANParameters;
- (id)adID;
- (id)logExtra;
- (void)setAdID:;
- (void)setCreativeID:;
- (void)setLogExtra:;
- (void)setSKANParameters:;
- (void)setTrackUrlList:;
- (id)trackUrlList;
- (void)setGroupID:;
- (id)groupID;
- (id)initWithDictionary:;
- (id)adType;
- (void).cxx_destruct;
- (void)setAdType:;
- (id)creativeID;
+ (id)adInfoParamsWithDictionary:;
@end
