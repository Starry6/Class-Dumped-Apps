@interface AWECustomPropResourceManager : NSObject
@property (nonatomic) @? customPropExportInfoUpdateBlock;
@property (nonatomic) NSMutableArray exportResources;
- (id)customPropExportInfoUpdateBlock;
- (id)exportResources;
- (void)setCustomPropExportInfoUpdateBlock:;
- (void)setExportResources:;
- (void).cxx_destruct;
+ (void)observeCustomPropResourceUpdateCallback:;
+ (void)notifiCustomPropResourceUpdateWithPackageURS:iconURS:exportTaskId:;
+ (void)clear;
+ (id)shareInstance;
@end
