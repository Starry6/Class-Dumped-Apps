@interface AWEWorkspaceDraftLoadResultImpl : NSObject
@property (nonatomic) NSMutableArray nonfatalErrors;
@property (nonatomic) NSError fatalError;
@property (nonatomic) AWEVideoPublishViewModel workspace;
@property (nonatomic) NSError error;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)nonfatalErrors;
- (void)addNonfatalErrorIfNeeded:;
- (void)setNonfatalErrors:;
- (id)workspace;
- (void)setWorkspace:;
- (void).cxx_destruct;
- (id)error;
- (void)setFatalError:;
- (id)fatalError;
@end
