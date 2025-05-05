@interface IESLivePKGuestApplyListPopUpViewConfig : NSObject
@property (nonatomic) UIImage topLeftImage;
@property (nonatomic) NSAttributedString topAttributeTitle;
@property (nonatomic) NSString topRightTitle;
@property (nonatomic) q linkMicStatus;
@property (nonatomic) BOOL isPreApply;
- (BOOL)isPreApply;
- (long long)linkMicStatus;
- (void)setIsPreApply:;
- (void)setLinkMicStatus:;
- (void)setTopAttributeTitle:;
- (void)setTopLeftImage:;
- (id)topAttributeTitle;
- (id)topLeftImage;
- (id)init;
- (void).cxx_destruct;
- (id)topRightTitle;
- (void)setTopRightTitle:;
@end
