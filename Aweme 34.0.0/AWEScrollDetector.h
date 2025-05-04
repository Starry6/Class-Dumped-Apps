@interface AWEScrollDetector : NSObject
@property (nonatomic) @? didDetectScrolling;
- (void)setDidDetectScrolling:;
- (id)swizzledClassNameForClass:;
- (id)didDetectScrolling;
- (void)swizzleScrollView:;
- (void)unswizzleScrollView:;
- (void).cxx_destruct;
@end
