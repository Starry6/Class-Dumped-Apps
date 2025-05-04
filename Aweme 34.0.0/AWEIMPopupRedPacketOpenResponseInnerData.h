@interface AWEIMPopupRedPacketOpenResponseInnerData : MTLModel
@property (nonatomic) AWEIMPopupRedPacketOpenDetailData openDetailData;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)openDetailData;
- (void)setOpenDetailData:;
- (void).cxx_destruct;
+ (id)openDetailDataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
