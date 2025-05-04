@interface AWEIMPopupRedPacketStatusModel : MTLModel
@property (nonatomic) NSString errorTips;
@property (nonatomic) NSNumber errorCode;
@property (nonatomic) AWEIMPopupRedPacketStatusInnerData redPacketStatusData;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)errorTips;
- (void)setErrorTips:;
- (id)redPacketStatusData;
- (void)setRedPacketStatusData:;
- (void)setErrorCode:;
- (id)errorCode;
- (void).cxx_destruct;
+ (id)redPacketStatusDataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
