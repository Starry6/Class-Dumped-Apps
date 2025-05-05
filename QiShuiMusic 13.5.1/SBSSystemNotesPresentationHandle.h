@interface SBSSystemNotesPresentationHandle : NSObject
@property (nonatomic) q presentationMode;
@property (nonatomic) SBSSystemNotesPresentationConfiguration requestedConfiguration;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)removeObserver:;
- (void)addObserver:;
- (void)dealloc;
- (long long)presentationMode;
- (void).cxx_destruct;
- (void)invalidate;
- (id)initWithConfiguration:;
- (void)activate;
- (id)configuration:didChangeToPresentationMode:;
- (id)configuration:didInvalidateWithError:;
- (id)initWithConfiguration:client:;
- (id)requestedConfiguration;
- (void)_invalidateWithError:locally:;
@end
