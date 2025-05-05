@interface IESLivePublicScreenNotificationCenter : NSObject
@property (nonatomic) IESLivePublicScreenView publicScreen;
@property (nonatomic) NSMutableDictionary observerDic;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)mergeObservers:;
- (void)setObserverDic:;
- (void)addSubscriber:forEvent:;
- (void)messageListStateReset;
- (void)messageListViewDidEndDecelerating:;
- (void)messageListViewDidEndDragging:willDecelerate:;
- (void)messageListViewReachBottom;
- (void)messageListViewWillBeginDragging:;
- (void)notifyObserversForEvent:block:;
- (id)observerDic;
- (id)publicScreen;
- (void)setPublicScreen:;
- (id)init;
- (void).cxx_destruct;
- (void)removeSubscriber:;
@end
