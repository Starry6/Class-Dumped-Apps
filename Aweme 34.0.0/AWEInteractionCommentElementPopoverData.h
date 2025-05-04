@interface AWEInteractionCommentElementPopoverData : NSObject
@property (nonatomic) NSDictionary contextDict;
@property (nonatomic) AWEAwemeModel model;
- (void)animationDidStop:finished:;
- (id)contextDict;
- (void)setContextDict:;
- (id)elementContentView;
- (void)configContentView:atIndex:;
- (void)loadDataIfNeeded:releaseBlock:;
- (void)eventOccurAtIndex:target:sourceView:containerView:eventType:completion:;
- (void)removeCoverView;
- (void)setModel:;
- (id)init;
- (void)dealloc;
- (id)model;
- (void).cxx_destruct;
- (long long)dataCount;
@end
