@interface AWEDeliveryPopMenuItem : NSObject
@property (nonatomic) NSString menuTitle;
@property (nonatomic) UIImage menuImage;
@property (nonatomic) Q type;
- (unsigned long long)type;
- (void)setType:;
- (id)menuTitle;
- (void)setMenuTitle:;
- (void).cxx_destruct;
- (void)setMenuImage:;
- (id)menuImage;
+ (id)menuItemsWithTypes:;
+ (id)menuItemWithType:;
+ (id)titleWithTypeMapper;
+ (id)imageNameWithTypeMapper;
@end
