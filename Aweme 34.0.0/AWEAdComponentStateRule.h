@interface AWEAdComponentStateRule : NSObject
@property (nonatomic) AWEAdComponentExamineContext context;
@property (nonatomic) @? reportBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setReportBlock:;
- (id)reportBlock;
- (BOOL)checkViewIsNormal:;
- (long long)getFrameGap;
- (BOOL)isSizeAnimationing:;
- (void)apply;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
@end
