@interface AWEFeedTabJumpGuideViewConfig : NSObject
@property (nonatomic) NSString hintLabel;
@property (nonatomic) NSString buttonTitle;
@property (nonatomic) NSArray imageURLList;
@property (nonatomic) Q iconPosition;
@property (nonatomic) @? btnClickBlock;
- (void)setIconPosition:;
- (unsigned long long)iconPosition;
- (id)imageURLList;
- (void)setImageURLList:;
- (id)btnClickBlock;
- (void)setBtnClickBlock:;
- (void).cxx_destruct;
- (id)buttonTitle;
- (void)setButtonTitle:;
- (id)hintLabel;
- (void)setHintLabel:;
@end
