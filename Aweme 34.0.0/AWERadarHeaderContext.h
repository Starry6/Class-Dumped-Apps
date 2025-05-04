@interface AWERadarHeaderContext : NSObject
@property (nonatomic) NSString parentVCString;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) NSString referString;
@property (nonatomic) AWERadarViewManager viewManager;
- (id)referString;
- (void)setEnterFrom:;
- (void)setReferString:;
- (id)enterFrom;
- (void)setViewManager:;
- (id)parentVCString;
- (void)setParentVCString:;
- (void).cxx_destruct;
- (id)viewManager;
@end
