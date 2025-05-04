@interface AWEIMTaskPlatformViewDataSource : NSObject
@property (nonatomic) AWEIMTaskCardNaviDatasource naviDatasource;
@property (nonatomic) AWEIMTaskPlatformContentDataSource contentDatasource;
- (id)naviDatasource;
- (void)setNaviDatasource:;
- (id)contentDatasource;
- (void)setContentDatasource:;
- (void).cxx_destruct;
@end
