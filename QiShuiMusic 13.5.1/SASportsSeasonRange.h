@interface SASportsSeasonRange : AceObject
@property (nonatomic) NSDate end;
@property (nonatomic) NSString seasonType;
@property (nonatomic) NSDate start;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setEnd:;
- (void)setStart:;
- (id)end;
- (id)groupIdentifier;
- (id)start;
- (id)encodedClassName;
- (id)seasonType;
- (void)setSeasonType:;
+ (id)seasonRange;
+ (id)seasonRangeWithDictionary:context:;
@end
