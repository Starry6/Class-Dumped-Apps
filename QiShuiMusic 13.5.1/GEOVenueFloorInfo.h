@interface GEOVenueFloorInfo : NSObject
@property (nonatomic) s ordinal;
@property (nonatomic) Q levelID;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)initWithLevel:;
- (short)ordinal;
- (unsigned long long)levelID;
- (id)initWithOrdinal:levelID:;
+ (id)floorInfosFromLevels:;
+ (BOOL)isIntegerValidOrdinal:;
@end
