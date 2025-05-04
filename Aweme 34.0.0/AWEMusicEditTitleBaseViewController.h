@interface AWEMusicEditTitleBaseViewController : UIViewController
@property (nonatomic) NSString enterFromString;
@property (nonatomic) NSString musicID;
@property (nonatomic) Q maxLength;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)configWithRouterParamDict:;
- (id)musicID;
- (void)setMusicID:;
- (id)enterFromString;
- (void)setEnterFromString:;
- (id)validMusicNameCharset;
- (void)editMusicTitleWithMusicID:title:completion:;
- (id)replaceSpaceWithText:;
- (BOOL)judgeIllegalCharacter:;
- (void)updateInputHintStatus;
- (unsigned long long)maxLength;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)setMaxLength:;
@end
