@interface AWEOfflineDetailVCDelegate : NSObject
@property (nonatomic) NSArray awemeModels;
@property (nonatomic) q lastIndex;
@property (nonatomic) BOOL isMix;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)detailTableViewController:willDisplayCell:forRowAtIndexPath:model:;
- (void)detailTableViewController:scrollDidEndAtIndexPath:model:;
- (id)awemeModels;
- (void)setAwemeModels:;
- (void)setIsMix:;
- (BOOL)isMix;
- (void)offlineVideoPlayCheckWithModel:;
- (id)logType;
- (void).cxx_destruct;
- (long long)lastIndex;
- (void)setLastIndex:;
- (id)initWithModels:;
@end
