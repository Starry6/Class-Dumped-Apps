@interface AWEAdOpenLiveRoomParamModel : BDXBridgeModel
@property (nonatomic) NSArray roomIDList;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) NSString currentRoomID;
- (void)setEnterFrom:;
- (id)enterFrom;
- (id)currentRoomID;
- (id)roomIDList;
- (void)setRoomIDList:;
- (void)setCurrentRoomID:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
