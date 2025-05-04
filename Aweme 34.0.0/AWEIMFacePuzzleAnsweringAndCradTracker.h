@interface AWEIMFacePuzzleAnsweringAndCradTracker : NSObject
+ (void)trackCardEvent:message:context:params:;
+ (void)trackShareCardShow:context:params:;
+ (void)trackShareCardClick:context:params:;
+ (void)trackQuestionCardShow:context:params:;
+ (void)trackQuestionCardClick:context:params:;
+ (void)trackAnswerCardShow:context:params:;
+ (void)trackAnswerCardClick:context:params:;
+ (void)trackPreparePageBackCLick:params:;
+ (void)trackAnsweringPageCLick:params:;
+ (void)trackAnsweringExitPageCLick:params:;
+ (id)getUser:;
@end
