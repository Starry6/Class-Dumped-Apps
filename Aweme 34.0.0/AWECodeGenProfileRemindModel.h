@interface AWECodeGenProfileRemindModel : AWEBaseDataModel
@property (nonatomic) NSInteger type;
@property (nonatomic) NSString remindId;
@property (nonatomic) NSString content;
@property (nonatomic) NSString linkUrl;
@property (nonatomic) AWECodeGenRemindStyleModel lightStyleModel;
@property (nonatomic) AWECodeGenRemindStyleModel darkStyleModel;
@property (nonatomic) AWECodeGenPopupModel popupModel;
- (id)remindId;
- (void)setRemindId:;
- (id)lightStyleModel;
- (void)setLightStyleModel:;
- (id)darkStyleModel;
- (void)setDarkStyleModel:;
- (id)content;
- (int)type;
- (void)setContent:;
- (void)setType:;
- (void).cxx_destruct;
- (id)linkUrl;
- (void)setLinkUrl:;
- (id)popupModel;
- (void)setPopupModel:;
+ (id)JSONKeyPathsByPropertyKey;
@end
