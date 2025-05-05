@interface CNChangeNotifierDarwinWrapper : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)addObserver:notification:;
- (void)removeObserver:notification:;
- (void)postNotification:;
@end
