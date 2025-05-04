@interface AWEIMPopupRedPacketApplyDetailModel : MTLModel
@property (nonatomic) NSString errorTips;
@property (nonatomic) NSNumber errorCode;
@property (nonatomic) AWEIMPopupRedPacketOpenDetailData openDetailData;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)errorTips;
- (void)setErrorTips:;
- (id)openDetailData;
- (void)setOpenDetailData:;
- (void)setErrorCode:;
- (id)errorCode;
- (void).cxx_destruct;
+ (id)openDetailDataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
