@interface CoreDAVActionBackedTask : CoreDAVTask
@property (nonatomic) CoreDAVAction backingAction;
- (void).cxx_destruct;
- (id)description;
- (id)backingAction;
- (void)setBackingAction:;
@end
