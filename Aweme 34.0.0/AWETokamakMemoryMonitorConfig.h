@interface AWETokamakMemoryMonitorConfig : NSObject
@property (nonatomic) BOOL userPathEnabled;
@property (nonatomic) BOOL uploadByUserEnabled;
- (BOOL)isUserPathEnabled;
- (void)setUserPathEnabled:;
- (BOOL)isUploadByUserEnabled;
- (void)setUploadByUserEnabled:;
@end
