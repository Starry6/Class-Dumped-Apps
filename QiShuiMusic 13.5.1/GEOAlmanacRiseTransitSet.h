@interface GEOAlmanacRiseTransitSet : NSObject
@property (nonatomic) NSDate rise;
@property (nonatomic) NSDate transit;
@property (nonatomic) NSDate set;
@property (nonatomic) BOOL isIdeal;
@property (nonatomic) {_GEORiseTransitSetEvent=dI} firstItem;
@property (nonatomic) {_GEORiseTransitSetEvent=dI} lastItem;
- (id)rise;
- (id)set;
- (BOOL)isIdeal;
- (id)transit;
- (id)initWithRise:transit:set:;
- (id)firstItem;
- (id)description;
- (id)lastItem;
- (id).cxx_construct;
@end
