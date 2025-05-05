@interface EARTokenPronounciations : NSObject
@property (nonatomic) NSString token;
@property (nonatomic) NSArray pronunciations;
- (id)token;
- (void)setToken:;
- (void).cxx_destruct;
- (id)pronunciations;
- (void)setPronunciations:;
- (id)initWithToken:pronunciations:;
- (id)_quasarProns;
@end
