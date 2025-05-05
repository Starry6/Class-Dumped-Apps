@interface BDAPUSendThirdTrackParamModel : BDXBridgeModel
@property (nonatomic) NSArray trackURLList;
@property (nonatomic) NSString trackLabel;
@property (nonatomic) NSString cid;
@property (nonatomic) NSString adID;
@property (nonatomic) NSString logExtra;
- (id)adID;
- (id)logExtra;
- (void)setAdID:;
- (void)setLogExtra:;
- (void)setTrackLabel:;
- (void)setTrackURLList:;
- (id)trackURLList;
- (id)cid;
- (void).cxx_destruct;
- (id)trackLabel;
- (void)setCid:;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)JSONTransformerForKey:;
@end
