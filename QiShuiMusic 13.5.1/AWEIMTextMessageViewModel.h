@interface AWEIMTextMessageViewModel : AWEIMMessageViewModel
@property (nonatomic) BOOL hasTrackDataForEntryShow;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)__updateElderlyPeopleAnswerStatus:examId:;
- (BOOL)hasTrackDataForEntryShow;
- (void)openSafeExamPage;
- (void)setHasTrackDataForEntryShow:;
- (void)setupWithMessage:;
- (void)trackDataForEntryShow;
- (void)updateElderlyPeopleAnswerFailWithId:;
- (void)updateElderlyPeopleAnswerPassWithId:;
- (void)dealloc;
@end
