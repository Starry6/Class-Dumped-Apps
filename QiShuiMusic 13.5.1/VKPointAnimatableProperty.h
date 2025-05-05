@interface VKPointAnimatableProperty : NSObject
@property (nonatomic) UIViewFloatAnimatableProperty x;
@property (nonatomic) UIViewFloatAnimatableProperty y;
@property (nonatomic) {CGPoint=dd} value;
@property (nonatomic) {CGPoint=dd} presentationValue;
- (id)presentationValue;
- (id)init;
- (id)y;
- (id)x;
- (void)setValue:;
- (void).cxx_destruct;
- (id)value;
@end
