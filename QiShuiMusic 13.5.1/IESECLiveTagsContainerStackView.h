@interface IESECLiveTagsContainerStackView : UIStackView
@property (nonatomic) @? onHideByCustomBlock;
@property (nonatomic) NSNumber minShowNum;
- (id)getLocalSuperView:;
- (id)minShowNum;
- (id)onHideByCustomBlock;
- (void)setMinShowNum:;
- (void)setOnHideByCustomBlock:;
- (void)layoutSubviews;
- (void).cxx_destruct;
@end
