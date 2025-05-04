@interface AWEAdComponentExamineViewItem : NSObject
@property (nonatomic) UIView view;
@property (nonatomic) NSString logExtraStr;
@property (nonatomic) NSString component_id;
@property (nonatomic) BOOL isNormalComponent;
@property (nonatomic) @? getCurrentViewBlock;
- (id)logExtraStr;
- (BOOL)isNormalComponent;
- (void)setLogExtraStr:;
- (id)component_id;
- (void)setComponent_id:;
- (void)setIsNormalComponent:;
- (id)getCurrentViewBlock;
- (void)setGetCurrentViewBlock:;
- (id)view;
- (void)setView:;
- (void).cxx_destruct;
@end
