@interface IESLiveNewDressContainer : NSObject
@property (nonatomic) IESLiveNewDressContext context;
@property (nonatomic) IESLiveNewDressErrorFactory errorFactory;
@property (nonatomic) IESLiveNewDressMonitor monitor;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)dressContext;
- (id)dressErrorFactory;
- (id)dressMonitor;
- (id)errorFactory;
- (void)setErrorFactory:;
- (void)updateDressContext:;
- (id)init;
- (id)context;
- (void)setMonitor:;
- (void).cxx_destruct;
- (id)monitor;
- (void)setContext:;
@end
