@interface AWEIMPhotoPickerFunctionModel : NSObject
@property (nonatomic) Q functionType;
@property (nonatomic) Q actionType;
@property (nonatomic) UIImage iconImage;
@property (nonatomic) NSString icon;
@property (nonatomic) NSString title;
@property (nonatomic) NSString subTitle;
@property (nonatomic) BOOL isSelected;
@property (nonatomic) @? actionBlock;
@property (nonatomic) BOOL useShadowIcon;
- (void)setUseShadowIcon:;
- (BOOL)useShadowIcon;
- (unsigned long long)actionType;
- (void)setIsSelected:;
- (unsigned long long)functionType;
- (void)setActionType:;
- (id)iconImage;
- (void)setIconImage:;
- (id)icon;
- (void)setSubTitle:;
- (id)subTitle;
- (BOOL)isSelected;
- (void)setIcon:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (void)setActionBlock:;
- (id)actionBlock;
- (void)setFunctionType:;
@end
