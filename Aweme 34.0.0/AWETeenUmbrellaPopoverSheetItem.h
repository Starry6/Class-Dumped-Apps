@interface AWETeenUmbrellaPopoverSheetItem : NSObject
@property (nonatomic) UIImage iconImage;
@property (nonatomic) NSString title;
@property (nonatomic) NSString subTitle;
@property (nonatomic) @? clickActionBlock;
- (void)setClickActionBlock:;
- (id)clickActionBlock;
- (id)iconImage;
- (void)setIconImage:;
- (void)setSubTitle:;
- (id)subTitle;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
@end
