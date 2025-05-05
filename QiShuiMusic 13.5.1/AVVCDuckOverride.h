@interface AVVCDuckOverride : NSObject
@property (nonatomic) NSNumber duckOthers;
@property (nonatomic) NSNumber duckToLevel;
@property (nonatomic) BOOL isBlur;
@property (nonatomic) NSNumber mixWithOthers;
- (void).cxx_destruct;
- (id)description;
- (id)initWithDuckOthers:duckToLevel:mixWithOthers:;
- (id)duckOthers;
- (void)setDuckOthers:;
- (id)duckToLevel;
- (void)setDuckToLevel:;
- (BOOL)isBlur;
- (void)setIsBlur:;
- (id)mixWithOthers;
- (void)setMixWithOthers:;
@end
