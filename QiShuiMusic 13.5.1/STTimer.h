@interface STTimer : STSiriModelObject
@property (nonatomic) NSString timerId;
@property (nonatomic) q state;
@property (nonatomic) NSNumber value;
- (void)setState:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void)setValue:;
- (long long)state;
- (void).cxx_destruct;
- (id)value;
- (id)timerId;
- (void)setTimerId:;
+ (BOOL)supportsSecureCoding;
@end
