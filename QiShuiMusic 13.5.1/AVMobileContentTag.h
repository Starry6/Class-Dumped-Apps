@interface AVMobileContentTag : NSObject
@property (nonatomic) NSString title;
@property (nonatomic) UIColor tintColor;
@property (nonatomic) float normalizedCornerRadius;
@property (nonatomic) Q placement;
@property (nonatomic) {UIEdgeInsets=dddd} layoutMargins;
- (unsigned long long)placement;
- (id)_initInternal;
- (id)tintColor;
- (id)layoutMargins;
- (id)title;
- (void).cxx_destruct;
- (float)normalizedCornerRadius;
+ (id)adContentTag;
+ (id)adContentTagWithTintColor:;
+ (id)liveContentTag;
@end
