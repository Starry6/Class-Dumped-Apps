@interface AWEPadDanmakuEntryView : UIView
@property (nonatomic) UIView divideLineView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) UIImageView danmakuIconImageView;
@property (nonatomic) UITextField danmakuInputView;
@property (nonatomic) <AWEPadDanmakuEntryDelegate> danmakuEntryDelegate;
@property (nonatomic) @? didUpdateHiddenBlock;
- (id)didUpdateHiddenBlock;
- (void)setDidUpdateHiddenBlock:;
- (id)divideLineView;
- (void)setDivideLineView:;
- (id)danmakuInputView;
- (id)danmakuIconImageView;
- (void)handleTapDanmakuInputView;
- (void)handleTapDanmkuIcon;
- (id)danmakuEntryDelegate;
- (void)setDanmakuIconImageView:;
- (void)setDanmakuInputView:;
- (void)setDanmakuEntryDelegate:;
- (id)init;
- (void)setHidden:;
- (void).cxx_destruct;
- (BOOL)textFieldShouldBeginEditing:;
- (void)setupView;
@end
