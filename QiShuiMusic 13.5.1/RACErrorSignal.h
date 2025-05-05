@interface RACErrorSignal : RACSignal
@property (nonatomic) NSError error;
- (id)subscribe:;
- (id)error;
- (void).cxx_destruct;
+ (id)error:;
@end
