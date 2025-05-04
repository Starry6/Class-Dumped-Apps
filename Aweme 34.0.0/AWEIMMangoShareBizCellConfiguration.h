@interface AWEIMMangoShareBizCellConfiguration : NSObject
@property (nonatomic) UIImage internalIconImage;
@property (nonatomic) NSString title;
@property (nonatomic) NSString buttonTitle;
@property (nonatomic) @? tapAction;
- (id)internalIconImage;
- (id)initWithIconImage:title:buttonTitle:tapAction:;
- (void)setInternalIconImage:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (id)buttonTitle;
- (void)setButtonTitle:;
- (id)tapAction;
- (void)setTapAction:;
@end
