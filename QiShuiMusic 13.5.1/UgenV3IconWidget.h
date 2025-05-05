@interface UgenV3IconWidget : UgenWidget
@property (nonatomic) UgenV3ImageView imageView;
@property (nonatomic) NSString src;
@property (nonatomic) NSString textColor;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)override_closingWorkAfterRender;
- (id)v3_customParams;
- (void)imageView:loadCompleteWithImage:;
- (void)p_updateWithImage:color:;
- (id)real_textColor;
- (void)subRender_image_info;
- (id)ugenView;
- (id)init;
- (void)setTextColor:;
- (void).cxx_destruct;
- (id)textColor;
- (id)imageView;
- (void)setImageView:;
- (id)src;
- (void)setSrc:;
@end
