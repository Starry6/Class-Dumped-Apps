@interface BDMannorSendThirdTrackParamModel : BDXBridgeModel
@property (nonatomic) NSArray trackURLList;
@property (nonatomic) NSString trackLabel;
@property (nonatomic) NSString creativeID;
@property (nonatomic) NSString adID;
@property (nonatomic) NSString logExtra;
@property (nonatomic) NSString groupID;
- (id)adID;
- (id)logExtra;
- (void)setAdID:;
- (void)setCreativeID:;
- (void)setLogExtra:;
- (void)setTrackLabel:;
- (void)setTrackURLList:;
- (id)trackURLList;
- (void)setGroupID:;
- (id)groupID;
- (void).cxx_destruct;
- (id)trackLabel;
- (id)creativeID;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)JSONTransformerForKey:;
@end
