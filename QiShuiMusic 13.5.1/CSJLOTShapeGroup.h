@interface CSJLOTShapeGroup : NSObject
@property (nonatomic) NSString keyname;
@property (nonatomic) NSArray items;
- (id)keyname;
- (void)_mapFromJSON:;
- (id)initWithJSON:;
- (id)items;
- (void).cxx_destruct;
- (id)description;
+ (id)shapeItemWithJSON:;
@end
