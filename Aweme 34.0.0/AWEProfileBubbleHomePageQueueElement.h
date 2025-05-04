@interface AWEProfileBubbleHomePageQueueElement : NSObject
@property (nonatomic) UIView<AWEProfileBubbleProtocol> view;
@property (nonatomic) Q type;
@property (nonatomic) Q queueType;
@property (nonatomic) q priority;
@property (nonatomic) AWEPriorityQueue queue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)view;
- (long long)priority;
- (void)setView:;
- (unsigned long long)type;
- (void)setType:;
- (void)setPriority:;
- (void).cxx_destruct;
- (unsigned long long)queueType;
- (void)setQueueType:;
@end
