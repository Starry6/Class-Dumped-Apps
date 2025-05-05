@interface RTIKeyedArchiver : NSKeyedArchiver
@property (nonatomic) Q rtiVersion;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)rtiVersion;
- (void)setRtiVersion:;
@end
