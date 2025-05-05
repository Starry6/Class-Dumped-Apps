@interface TVLOptionInternal : NSObject
@property (nonatomic) Q type;
@property (nonatomic) q key;
- (long long)key;
- (void)setType:;
- (void)setKey:;
- (unsigned long long)type;
+ (id)optionWithKey:type:;
@end
