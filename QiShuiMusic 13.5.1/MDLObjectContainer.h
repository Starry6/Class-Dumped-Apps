@interface MDLObjectContainer : NSObject
@property (nonatomic) Q count;
@property (nonatomic) NSArray objects;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (unsigned long long)countByEnumeratingWithState:objects:count:;
- (id)objectAtIndexedSubscript:;
- (void)addObject:;
- (void)removeObject:;
- (id)objects;
- (void).cxx_destruct;
- (unsigned long long)count;
@end
