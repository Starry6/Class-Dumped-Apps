@interface BDMannorComponentElement : NSObject
@property (nonatomic) BDMannorAdCommentElement commentElement;
@property (nonatomic) BDMannorAdLearnMoreElement learnMoreElement;
@property (nonatomic) BDMannorAdOperationMaskElement operationMaskElement;
@property (nonatomic) BDMannorAdLargePictureElement largePictureElement;
- (id)commentElement;
- (id)largePictureElement;
- (id)learnMoreElement;
- (id)operationMaskElement;
- (void)setCommentElement:;
- (void)setLargePictureElement:;
- (void)setLearnMoreElement:;
- (void)setOperationMaskElement:;
- (void).cxx_destruct;
@end
