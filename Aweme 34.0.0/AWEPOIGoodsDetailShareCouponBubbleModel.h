@interface AWEPOIGoodsDetailShareCouponBubbleModel : MTLModel
@property (nonatomic) AWEPOIGoodsDetailShareCouponIconModel bubbleIcon;
@property (nonatomic) NSString bubbleText;
@property (nonatomic) NSDictionary bubbleStatusTextMap;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setBubbleIcon:;
- (id)bubbleIcon;
- (id)statusTextWithPlayStatus:;
- (id)bubbleStatusTextMap;
- (void)setBubbleStatusTextMap:;
- (void).cxx_destruct;
- (id)bubbleText;
- (void)setBubbleText:;
+ (id)JSONKeyPathsByPropertyKey;
@end
