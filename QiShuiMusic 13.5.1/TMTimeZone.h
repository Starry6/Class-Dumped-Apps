@interface TMTimeZone : NSObject
@property (nonatomic) NSString source;
@property (nonatomic) NSString olsonName;
- (void)dealloc;
- (id)initWithDictionary:;
- (void)setOlsonName:;
- (BOOL)hasSameOlsonNameAs:;
- (id)source;
- (id)description;
- (id)olsonName;
- (id)initWithOlsonName:fromSource:;
- (void)setSource:;
+ (id)timeZoneWithOlsonName:fromSource:;
@end
