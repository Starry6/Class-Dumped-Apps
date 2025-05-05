@interface BDUGChannel : NSObject
@property (nonatomic) NSMutableArray observers;
@property (nonatomic) # accountClass;
- (void)addAcountEventObserver:;
- (void)triggerAccountStatusEventWithStatus:;
- (Class)accountClass;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)setObservers:;
- (id)observers;
- (void)setAccountClass:;
+ (id)defaultChannel;
@end
