@interface AWENewVideoCoverCommandStack : NSObject
@property (nonatomic) <AWENewVideoCoverCommandStackDelegate> delegate;
@property (nonatomic) NSMutableArray mutableArray;
- (void)setMutableArray:;
- (BOOL)empty;
- (id)top;
- (id)pop;
- (void)push:;
- (id)delegate;
- (void)clear;
- (long long)size;
- (void).cxx_destruct;
- (void)setDelegate:;
- (id)mutableArray;
@end
