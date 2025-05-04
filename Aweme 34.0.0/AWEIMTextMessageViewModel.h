@interface AWEIMTextMessageViewModel : AWEIMMessageViewModel
@property (nonatomic) BOOL hasTrackDataForEntryShow;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setupWithMessage:;
- (void)updateElderlyPeopleAnswerPassWithId:;
- (void)updateElderlyPeopleAnswerFailWithId:;
- (void)trackDataForEntryShow;
- (void)openSafeExamPage;
- (BOOL)shouldUseHightLightBubbleColor;
- (BOOL)hasTrackDataForEntryShow;
- (void)setHasTrackDataForEntryShow:;
- (void)__updateElderlyPeopleAnswerStatus:examId:;
- (void)dealloc;
@end
