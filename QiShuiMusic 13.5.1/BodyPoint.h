@interface BodyPoint : NSObject
@property (nonatomic) {CGPoint=dd} location;
@property (nonatomic) float score;
- (id)init;
- (void)dealloc;
- (float)score;
- (id)location;
- (void)setLocation:;
- (void)setScore:;
@end
