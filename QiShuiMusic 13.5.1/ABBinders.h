@interface ABBinders : NSObject
@property (nonatomic) @? intBinder;
@property (nonatomic) @? stringBinder;
@property (nonatomic) @? blobBinder;
@property (nonatomic) @? pointerBinder;
- (void)setBlobBinder:;
- (void)setPointerBinder:;
- (id)intBinder;
- (id)stringBinder;
- (void)setStringBinder:;
- (id)pointerBinder;
- (id)blobBinder;
- (void)setIntBinder:;
@end
