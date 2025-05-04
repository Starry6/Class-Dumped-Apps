@interface AWETeenContentManageDataController : NSObject
@property (nonatomic) BOOL isUpdated;
- (void)updateDataWithStatus:;
- (void)fetchContentManageDataSource;
- (BOOL)getUpdatedStatus;
- (BOOL)isUpdated;
- (void)setIsUpdated:;
@end
