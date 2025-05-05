@interface RBNullDevice : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)renderImageInRect:options:renderer:;
- (void)renderImageInRect:options:renderer:completionQueue:handler:;
+ (id)sharedDevice;
@end
