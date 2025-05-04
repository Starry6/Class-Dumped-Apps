@interface AWEHPSlideGestureShouldBeginResult : NSObject
@property (nonatomic) NSString scene;
@property (nonatomic) UIGestureRecognizer gesture;
@property (nonatomic) BOOL shouldBegin;
@property (nonatomic) NSString reason;
@property (nonatomic) NSDictionary extra;
- (void)setExtra:;
- (void)setShouldBegin:;
- (BOOL)shouldBegin;
- (void)setScene:;
- (void)setGesture:;
- (id)scene;
- (id)extra;
- (void)setReason:;
- (id)gesture;
- (void).cxx_destruct;
- (id)reason;
@end
