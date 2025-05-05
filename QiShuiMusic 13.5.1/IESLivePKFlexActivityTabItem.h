@interface IESLivePKFlexActivityTabItem : NSObject
@property (nonatomic) NSNumber flexActivityID;
@property (nonatomic) Q status;
@property (nonatomic) BOOL isClicked;
@property (nonatomic) NSString title;
@property (nonatomic) NSString subTitle;
@property (nonatomic) BOOL isAdaptBigLayout;
@property (nonatomic) FlexActivity_SubTabConfig customizeConfig;
- (id)customizeConfig;
- (id)flexActivityID;
- (BOOL)isAdaptBigLayout;
- (BOOL)isClicked;
- (void)setCustomizeConfig:;
- (void)setFlexActivityID:;
- (void)setIsAdaptBigLayout:;
- (void)setIsClicked:;
- (void)setStatus:;
- (void)setTitle:;
- (id)title;
- (void).cxx_destruct;
- (void)setSubTitle:;
- (unsigned long long)status;
- (id)subTitle;
@end
