@interface SCNSpriteKitEventHandler : NSObject
@property (nonatomic) SKScene scene;
- (id)init;
- (void)setScene:;
- (void)dealloc;
- (BOOL)touchesBegan:withEvent:;
- (id)scene;
- (BOOL)touchesMoved:withEvent:;
- (BOOL)touchesEnded:withEvent:;
- (BOOL)touchesCancelled:withEvent:;
@end
