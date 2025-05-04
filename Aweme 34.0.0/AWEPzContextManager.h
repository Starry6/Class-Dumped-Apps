@interface AWEPzContextManager : NSObject
@property (nonatomic) NSMutableSet components;
@property (nonatomic) NSMutableDictionary componentIDMap;
@property (nonatomic) NSMutableDictionary componentTypeMap;
@property (nonatomic) NSMutableDictionary cTagMap;
@property (nonatomic) NSMutableDictionary sTagMap;
- (id)componentIDMap;
- (void)addComponent:toMap:forKey:;
- (id)componentTypeMap;
- (id)cTagMap;
- (id)sTagMap;
- (void)removeComponent:fromMap:forKey:;
- (id)getAllComponents;
- (id)queryComponentsWithComponentID:;
- (id)queryComponentsWithComponentType:;
- (id)queryComponentsWithCTag:;
- (id)queryComponentsWithSTag:;
- (void)setComponentIDMap:;
- (void)setComponentTypeMap:;
- (void)setCTagMap:;
- (void)setSTagMap:;
- (void)removeComponent:;
- (void)setComponents:;
- (void).cxx_destruct;
- (void)addComponent:;
- (id)components;
@end
