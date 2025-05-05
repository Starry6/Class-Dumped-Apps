@interface FLEXGlobalsEntry : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) @? entryNameFuture;
@property (nonatomic) @? viewControllerFuture;
@property (nonatomic) @? rowAction;
- (id)name;
- (id)entryNameFuture;
- (id)viewControllerFuture;
- (id)rowAction;
- (void).cxx_destruct;
+ (id)entryWithEntry:row:;
+ (id)entryWithNameFuture:viewControllerFuture:;
+ (id)entryWithNameFuture:action:;
@end
