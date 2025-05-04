@interface AWEIMPopupRedPacketOpenResponseModel : MTLModel
@property (nonatomic) NSString errorTips;
@property (nonatomic) NSNumber errorCode;
@property (nonatomic) AWEIMPopupRedPacketOpenResponseInnerData openResponseInnerData;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)errorTips;
- (void)setErrorTips:;
- (id)openResponseInnerData;
- (void)setOpenResponseInnerData:;
- (void)setErrorCode:;
- (id)errorCode;
- (void).cxx_destruct;
+ (id)openResponseInnerDataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
