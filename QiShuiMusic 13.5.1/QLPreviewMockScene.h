@interface QLPreviewMockScene : NSObject
@property (nonatomic) <QLPreviewControllerConformingDataSource> dataSource;
@property (nonatomic) <QLPreviewControllerConformingDelegate> delegate;
@property (nonatomic) q currentPreviewItemIndex;
@property (nonatomic) <QLPreviewItem> currentPreviewItem;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)reloadData;
- (void)setDataSource:;
- (id)init;
- (void)setDelegate:;
- (id)dataSource;
- (id)delegate;
- (void).cxx_destruct;
- (void)presentPreview;
- (void)dismissPreview;
- (void)refreshCurrentPreviewItem;
- (long long)currentPreviewItemIndex;
- (void)setCurrentPreviewItemIndex:;
- (id)currentPreviewItem;
+ (id)requestPreviewMockSceneActivation;
+ (BOOL)canPreviewItem:;
@end
