@interface AWEProfilePreviewSignatureView : UIView
@property (nonatomic) AWEProfileMentionLabel introLabel;
- (id)signatureStr;
- (id)aStrWithIntro:fontSize:andSignatureExtra:withOffset:isFromOthersProfilePage:;
- (void)foldSignature;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)userModel;
- (void)setupUI;
- (id)introLabel;
- (void)setIntroLabel:;
@end
