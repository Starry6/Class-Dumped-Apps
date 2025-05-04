@interface AWEEventContext : NSObject
@property (nonatomic) AWEEventContext baseContext;
@property (nonatomic) NSDictionary currentAttributes;
@property (nonatomic) NSDictionary attributes;
- (id)baseContext;
- (id)makeAttributes:;
- (void)setBaseContext:;
- (id)attributes;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)currentAttributes;
- (id)updateAttributes:;
- (void)setCurrentAttributes:;
+ (id)contextMakeAttributes:;
+ (id)contextWithBaseContext:;
+ (id)contextMakeBaseAttributes:;
+ (id)contextWithContext:;
@end
