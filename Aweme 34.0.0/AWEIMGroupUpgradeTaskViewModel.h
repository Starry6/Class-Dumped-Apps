@interface AWEIMGroupUpgradeTaskViewModel : NSObject
@property (nonatomic) BOOL disableResponseToClick;
@property (nonatomic) AWEIMGroupUpgradeTaskModel taskModel;
@property (nonatomic) {CGSize=dd} tailIconImageViewSize;
- (void)clickAction;
- (id)taskModel;
- (void)setTaskModel:;
- (BOOL)disableResponseToClick;
- (void)setDisableResponseToClick:;
- (id)tailIconImage;
- (id)tailIconImageViewSize;
- (void)setTailIconImageViewSize:;
- (void)tryResetDisableResponseToClick;
- (id)desc;
- (void).cxx_destruct;
@end
