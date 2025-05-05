@interface PFUbiquityFileCoordinator : NSFileCoordinator
- (void)dealloc;
- (BOOL)shouldRetryForError:ignoreFile:;
- (id)initWithFilePresenter:;
@end
