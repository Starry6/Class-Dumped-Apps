@interface SYShowBacklinkIndicatorCommand : NSObject
@property (nonatomic) <SYShowBacklinkIndicatorCommandImpl> _impl;
@property (nonatomic) BOOL active;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)_impl;
- (void).cxx_destruct;
- (void)runWithCompletion:;
- (void)invalidate;
- (BOOL)isActive;
- (id)initWithDomainIdentifiers:linkIdentifiers:;
- (void)set_impl:;
@end
