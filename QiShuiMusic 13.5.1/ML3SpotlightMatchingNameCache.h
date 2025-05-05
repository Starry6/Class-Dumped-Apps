@interface ML3SpotlightMatchingNameCache : NSObject
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)_initWithLibrary:matchString:cancelHandler:;
+ (void)loadFromLibrary:namesMatchingString:cancelHandler:;
@end
