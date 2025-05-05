@interface HMDUIViewHierarchy : NSObject
@property (nonatomic) Q maxFileCount;
@property (nonatomic) Q clearFileCount;
- (unsigned long long)clearFileCount;
- (id)getViewControllerNode:withDetail:;
- (id)getViewHierarchy:superView:superVC:withDetail:targetView:;
- (id)getViewNode:withDetail:targetView:;
- (unsigned long long)maxFileCount;
- (void)recordViewHierarchy:;
- (void)setClearFileCount:;
- (void)setMaxFileCount:;
- (void)updateConfigWithMaxFileCount:clearFileCount:;
- (void)uploadViewHierarchyIfNeedWithTitle:subTitle:;
+ (id)getDescriptionForUI:;
+ (id)shared;
@end
