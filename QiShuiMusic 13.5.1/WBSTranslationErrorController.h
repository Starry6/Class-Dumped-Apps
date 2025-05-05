@interface WBSTranslationErrorController : NSObject
@property (nonatomic) <WBSTranslationErrorControllerDelegate> delegate;
- (id)init;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (void)invalidate;
- (void)addError:;
- (id)_overriddenThresholdForError:;
@end
