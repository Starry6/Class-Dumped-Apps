@interface HTSLiveRoomCart : IESLivePBBaseMessage
@property (nonatomic) BOOL containCart;
@property (nonatomic) q total;
@property (nonatomic) q flashTotal;
@property (nonatomic) NSString cartIcon;
@property (nonatomic) NSInteger showCart;
@property (nonatomic) HTSLiveCartVertical vertical;
@property (nonatomic) BOOL hasVertical;
@property (nonatomic) HTSLiveCartHorizontal horizontal;
@property (nonatomic) BOOL hasHorizontal;
@property (nonatomic) HTSLiveGlobalCustomIcons globalCustomIcons;
@property (nonatomic) BOOL hasGlobalCustomIcons;
+ (id)descriptor;
@end
