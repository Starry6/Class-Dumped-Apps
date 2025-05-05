@interface BDAPUAdInfoMethodResultModel : BDXBridgeModel
@property (nonatomic) NSString adID;
@property (nonatomic) NSNumber adType;
@property (nonatomic) NSNumber cid;
@property (nonatomic) NSString groupID;
@property (nonatomic) NSString logExtra;
@property (nonatomic) NSArray trackUrlList;
@property (nonatomic) NSString SKANParameters;
- (id)SKANParameters;
- (id)adID;
- (id)logExtra;
- (void)setAdID:;
- (void)setLogExtra:;
- (void)setSKANParameters:;
- (void)setTrackUrlList:;
- (id)trackUrlList;
- (void)setGroupID:;
- (id)groupID;
- (id)adType;
- (id)cid;
- (void).cxx_destruct;
- (void)setAdType:;
- (void)setCid:;
+ (id)JSONKeyPathsByPropertyKey;
@end
