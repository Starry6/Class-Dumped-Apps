@interface AWEShowMonetizePopup : NSObject
@property (nonatomic) NSHashTable handlers;
@property (nonatomic) NSMutableDictionary popupTaskQueuesByName;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)popupTaskQueuesByName;
- (id)getHandlersForQueueName:;
- (void)addPopupHandler:;
- (void)removePopupHandler:;
- (id)createPopupTaskQueueWithName:;
- (void)setPopupTaskQueuesByName:;
- (id)handlers;
- (id)init;
- (void)setHandlers:;
- (void).cxx_destruct;
@end
