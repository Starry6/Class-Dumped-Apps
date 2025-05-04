@interface AWEShareOutsideSheetPanel : NSObject
@property (nonatomic) NSMutableArray items;
@property (nonatomic) DUXBasicSheet sheet;
@property (nonatomic) AWEAwemeModel currentModel;
- (void)dismissWithAnimation:completion:;
- (void)showWithShareItems:withModel:;
- (id)items;
- (void)setItems:;
- (void).cxx_destruct;
- (id)currentModel;
- (void)setCurrentModel:;
- (id)sheet;
- (void)setSheet:;
+ (id)shareInstance;
@end
