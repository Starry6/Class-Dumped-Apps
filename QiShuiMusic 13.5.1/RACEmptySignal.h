@interface RACEmptySignal : RACSignal
- (void)setName:;
- (id)subscribe:;
- (id)name;
+ (id)empty;
@end
