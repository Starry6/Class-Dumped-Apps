@interface TIKeyedArchiver : NSKeyedArchiver
@property (nonatomic) Q tiVersion;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)tiVersion;
- (void)setTiVersion:;
@end
