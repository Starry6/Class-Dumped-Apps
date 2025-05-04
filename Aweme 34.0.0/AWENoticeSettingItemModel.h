@interface AWENoticeSettingItemModel : NSObject
@property (nonatomic) q value;
@property (nonatomic) NSString title;
@property (nonatomic) NSString subTitle;
@property (nonatomic) BOOL isSelect;
@property (nonatomic) @? cellTappedBlock;
- (void)setCellTappedBlock:;
- (void)setIsSelect:;
- (BOOL)isSelect;
- (id)cellTappedBlock;
- (long long)value;
- (void)setSubTitle:;
- (void)setValue:;
- (id)subTitle;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
@end
