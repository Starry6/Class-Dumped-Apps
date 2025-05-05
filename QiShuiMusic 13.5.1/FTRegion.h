@interface FTRegion : NSObject
@property (nonatomic) NSDictionary _dictionary;
@property (nonatomic) FTRegion _parentRegion;
@property (nonatomic) NSString isoCode;
@property (nonatomic) NSString label;
@property (nonatomic) NSString regionID;
@property (nonatomic) NSString basePhoneNumber;
@property (nonatomic) FTRegion parentRegion;
@property (nonatomic) NSArray subRegions;
- (id)regionID;
- (id)_initWithDictionary:;
- (void)dealloc;
- (id)label;
- (void).cxx_destruct;
- (id)description;
- (id)_dictionary;
- (id)_parentRegion;
- (id)subRegions;
- (id)parentRegion;
- (void)_setParentRegion:;
- (id)regionWithID:;
- (id)isoCode;
- (id)basePhoneNumber;
- (void)set_dictionary:;
- (void)set_parentRegion:;
@end
