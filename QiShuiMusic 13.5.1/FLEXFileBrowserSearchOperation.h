@interface FLEXFileBrowserSearchOperation : NSOperation
@property (nonatomic) NSString path;
@property (nonatomic) NSString searchString;
@property (nonatomic) <FLEXFileBrowserSearchOperationDelegate> delegate;
- (unsigned long long)totalSizeAtPath:;
- (id)initWithPath:searchString:;
- (void)main;
- (id)delegate;
- (void)setDelegate:;
- (id)path;
- (void)setPath:;
- (id)searchString;
- (void)setSearchString:;
- (void).cxx_destruct;
@end
