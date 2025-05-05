@interface VSDownloadOptions : NSObject
@property (nonatomic) BOOL allowCellularData;
@property (nonatomic) BOOL allowDiscretionary;
- (BOOL)allowCellularData;
- (void)setAllowCellularData:;
- (BOOL)allowDiscretionary;
- (void)setAllowDiscretionary:;
@end
