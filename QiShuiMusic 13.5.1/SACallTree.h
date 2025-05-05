@interface SACallTree : NSObject
@property (nonatomic) NSArray rootObjects;
@property (nonatomic) NSArray rootFrames;
- (void).cxx_destruct;
- (id)initWithRootObjects:;
- (id)rootFrames;
- (void)enumerateCallTreeFrames:;
- (id)rootObjects;
@end
