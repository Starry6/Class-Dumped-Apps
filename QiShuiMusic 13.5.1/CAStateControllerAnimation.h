@interface CAStateControllerAnimation : NSObject
@property (nonatomic) CALayer layer;
@property (nonatomic) NSString key;
- (id)initWithLayer:key:;
- (void)dealloc;
- (id)key;
- (id)layer;
@end
