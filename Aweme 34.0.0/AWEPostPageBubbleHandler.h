@interface AWEPostPageBubbleHandler : NSObject
@property (nonatomic) NSMapTable bubbleHolderMap;
@property (nonatomic) <AWEPostPageContext> context;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)bindServices:;
- (void)showBubbleWithIdentifiers:;
- (id)bubbleHolderMap;
- (id)topologicalSortBubbleArrayInContainer:;
- (void)setBubbleHolderMap:;
- (void).cxx_destruct;
- (id)context;
- (void)addSubscriber:;
@end
