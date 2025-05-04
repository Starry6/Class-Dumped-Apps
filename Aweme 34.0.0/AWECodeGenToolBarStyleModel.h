@interface AWECodeGenToolBarStyleModel : AWEBaseDataModel
@property (nonatomic) NSString textColor;
@property (nonatomic) NSString backgroundColor;
@property (nonatomic) AWECodeGenUrlModel noticeIconModel;
@property (nonatomic) AWECodeGenUrlModel clickIconModel;
- (id)noticeIconModel;
- (void)setNoticeIconModel:;
- (id)clickIconModel;
- (void)setClickIconModel:;
- (void)setTextColor:;
- (id)backgroundColor;
- (void)setBackgroundColor:;
- (void).cxx_destruct;
- (id)textColor;
+ (id)JSONKeyPathsByPropertyKey;
@end
