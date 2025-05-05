@interface CEKLightingControlItem : NSObject
@property (nonatomic) q lightingType;
@property (nonatomic) NSString displayName;
@property (nonatomic) UIImage displayImage;
@property (nonatomic) UIImage displayShadowImage;
@property (nonatomic) UIImage displayOutlineImage;
@property (nonatomic) UIImage selectionBackgroundImage;
- (long long)lightingType;
- (id)displayName;
- (id)displayImage;
- (void).cxx_destruct;
- (id)initWithType:;
- (id)displayShadowImage;
- (id)displayOutlineImage;
- (id)selectionBackgroundImage;
+ (id)_defaultOutlineImage;
@end
