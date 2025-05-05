@interface IGListSectionMap : NSObject
@property (nonatomic) NSMapTable objectToSectionControllerMap;
@property (nonatomic) NSMapTable sectionControllerToSectionMap;
@property (nonatomic) NSMutableArray mObjects;
@property (nonatomic) NSArray objects;
- (id)debugDescriptionLines;
- (id)objectForSection:;
- (id)objectToSectionControllerMap;
- (id)sectionControllerForObject:;
- (id)sectionControllerToSectionMap;
- (long long)sectionForObject:;
- (long long)sectionForSectionController:;
- (void)setMObjects:;
- (void)updateWithObjects:sectionControllers:;
- (id)objects;
- (id)initWithMapTable:;
- (void).cxx_destruct;
- (void)reset;
- (id)copyWithZone:;
- (id)sectionControllerForSection:;
- (void)enumerateUsingBlock:;
- (void)updateObject:;
- (id)mObjects;
@end
