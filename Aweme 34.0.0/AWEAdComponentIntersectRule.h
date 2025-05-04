@interface AWEAdComponentIntersectRule : NSObject
@property (nonatomic) AWEAdComponentExamineContext context;
@property (nonatomic) @? reportBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setReportBlock:;
- (id)reportBlock;
- (BOOL)isFullScreenComponent:;
- (BOOL)isParentView:ofView:;
- (BOOL)isViewAnimationing:;
- (id)realViewWithItem:;
- (id)findLynxViewInView:itemView:;
- (void)apply;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
@end
