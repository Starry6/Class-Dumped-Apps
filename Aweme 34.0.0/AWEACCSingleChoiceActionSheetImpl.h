@interface AWEACCSingleChoiceActionSheetImpl : NSObject
@property (nonatomic) NSMutableArray actionlist;
@property (nonatomic) NSString titleText;
@property (nonatomic) NSString subTitleText;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setSubTitleText:;
- (void)setActionlist:;
- (id)actionlist;
- (void)setupTitle:subTitle:;
- (void)addActionWithTitle:subTitle:clickAction:;
- (void)show;
- (id)init;
- (void)setTitleText:;
- (id)titleText;
- (id)subTitleText;
- (void).cxx_destruct;
@end
