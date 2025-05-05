@interface GEOVenueLabel : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) NSString shortName;
@property (nonatomic) NSString detail;
- (id)initWithLabel:;
- (id)shortName;
- (id)init;
- (id)initWithName:;
- (id)detail;
- (void).cxx_destruct;
- (id)name;
- (id)initWithName:shortName:detail:;
@end
