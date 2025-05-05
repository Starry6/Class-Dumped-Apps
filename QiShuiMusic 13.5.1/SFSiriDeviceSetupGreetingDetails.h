@interface SFSiriDeviceSetupGreetingDetails : NSObject
@property (nonatomic) NSArray introWordTimings;
@property (nonatomic) NSString dialogAText;
@property (nonatomic) NSArray dialogAWordTimings;
@property (nonatomic) NSArray dialogBPhraseTimings;
@property (nonatomic) NSArray dialogCPhraseTimings;
- (void).cxx_destruct;
- (id)introWordTimings;
- (void)setIntroWordTimings:;
- (id)dialogAText;
- (void)setDialogAText:;
- (id)dialogAWordTimings;
- (void)setDialogAWordTimings:;
- (id)dialogBPhraseTimings;
- (void)setDialogBPhraseTimings:;
- (id)dialogCPhraseTimings;
- (void)setDialogCPhraseTimings:;
@end
