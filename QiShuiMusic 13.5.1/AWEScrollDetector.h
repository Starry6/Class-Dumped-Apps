@interface AWEScrollDetector : NSObject
@property (nonatomic) @? didDetectScrolling;
- (id)didDetectScrolling;
- (void)setDidDetectScrolling:;
- (void)swizzleScrollView:;
- (id)swizzledClassNameForClass:;
- (void)unswizzleScrollView:;
- (void).cxx_destruct;
@end
