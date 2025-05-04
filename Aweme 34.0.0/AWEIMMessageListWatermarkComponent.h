@interface AWEIMMessageListWatermarkComponent : AWEIMComponentBase
@property (nonatomic) UIImageView watermarkImageView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)afterInitialComponentAllResolved:;
- (void)componentDidMounted:;
- (id)watermarkImageView;
- (void)setWatermarkImageView:;
- (void)insertWatermarkImageViewToViewHierarchy;
- (void)updateWatermarkWithImage:;
- (void).cxx_destruct;
+ (BOOL)canCreateComponentWithContext:;
@end
