@interface NSKnownKeysDictionary : NSMutableDictionary
@property (nonatomic) NSKnownKeysMappingStrategy mapping;
- (void)setValue:atIndex:;
- (id)valueAtIndex:;
- (id)values;
- (id)initWithSearchStrategy:;
- (void)getKeys:;
- (void)getObjects:andKeys:;
- (void)_setValues:retain:;
- (id)mapping;
- (id)initForKeys:;
- (void)setValues:;
- (void)getObjects:;
+ (id)allocWithZone:;
+ (id)alloc;
+ (id)classesForArchiving;
+ (id)newInstanceWithSearchStrategy:inData:;
@end
