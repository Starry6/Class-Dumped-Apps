@interface SYShowBacklinkIndicatorCommandSBImpl : NSObject
@property (nonatomic) SBSSystemNotesPresentationHandle _handle;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) BOOL active;
- (id)_handle;
- (void).cxx_destruct;
- (void)runWithCompletion:;
- (void)invalidate;
- (BOOL)isActive;
- (void)systemNotesPresentationHandle:didChangePresentationMode:;
- (id)initWithDomainIdentifiers:linkIdentifiers:;
- (void)set_handle:;
@end
