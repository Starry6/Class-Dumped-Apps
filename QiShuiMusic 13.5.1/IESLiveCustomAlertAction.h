@interface IESLiveCustomAlertAction : NSObject
@property (nonatomic) NSString title;
@property (nonatomic) UIColor textColor;
@property (nonatomic) @? actionBlock;
- (id)actionBlock;
- (void)setTitle:;
- (id)title;
- (void)setTextColor:;
- (void).cxx_destruct;
- (id)textColor;
- (void)setActionBlock:;
+ (id)actionWithTitle:textColor:actionBlock:;
@end
