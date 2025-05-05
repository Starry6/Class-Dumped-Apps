@interface IESECShopProductsVideoPlayingState : NSObject
@property (nonatomic) IESECRelationInlinePlayItem playItem;
@property (nonatomic) q maximumDuration;
@property (nonatomic) UIView container;
@property (nonatomic) NSString productID;
@property (nonatomic) IESECShopProductsImageLoadConfiguration playerIcon;
@property (nonatomic) Q mediaType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)playItem;
- (id)playerIcon;
- (void)setPlayItem:;
- (void)setPlayerIcon:;
- (id)productID;
- (unsigned long long)mediaType;
- (void)setContainer:;
- (void)setProductID:;
- (id)container;
- (long long)maximumDuration;
- (void).cxx_destruct;
- (void)setMaximumDuration:;
@end
